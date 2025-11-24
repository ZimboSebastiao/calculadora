define LOGO
\033[1;31m
 __________
| ________ |
||12345678||
|""""""""""|
|[M|#|C][-]|
|[7|8|9][+]|
|[4|5|6][x]|
|[1|2|3][%]|
|[.|O|:][=]|
"----------"

\033[0m
endef
export LOGO

# Compilador e flags
CC          := cc
CFLAGS      := -Wall -Wextra -Werror -Iheader

# Diretórios
SRC_DIR     := src
OBJ_DIR     := obj
INC_DIR     := header

# Nome do binário
NAME        := calculadora

# Arquivos fonte do projeto principal
SRC_FILES   := \
	layout/layout.c \
	utils/options.c \
    basic/sum.c \
    basic/subtration.c \
    basic/multiplication.c \
    basic/division.c \
    intermediary/factorial.c \
    intermediary/fibonacci.c \
    intermediary/mdc.c \
    intermediary/power.c \
	intermediary/prime.c \
    intermediary/square.c

MAIN_SRC    := main.c
MAIN_OBJ    := $(OBJ_DIR)/main.o

SRCS        := $(addprefix $(SRC_DIR)/, $(SRC_FILES))
OBJS        := $(SRCS:$(SRC_DIR)/%.c=$(OBJ_DIR)/%.o)

GREEN   := \033[1;32m
YELLOW  := \033[1;33m
RED     := \033[1;31m
BLUE    := \033[1;34m
RESET   := \033[0m

all: $(NAME)

$(NAME): $(OBJS) $(MAIN_OBJ)
	@echo "$$LOGO"
	@echo "$(BLUE)🔧 Linking $(NAME)...$(RESET)"
	@$(CC) $(CFLAGS) $(OBJS) $(MAIN_OBJ) -o $(NAME)
	@echo "$(GREEN)✅ Build complete: $(NAME)$(RESET)"

# Compilação dos .o dos arquivos em src/
$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c | $(OBJ_DIR)
	@mkdir -p $(dir $@)
	@$(CC) $(CFLAGS) -c $< -o $@
	@echo "$(YELLOW)Compiled:$(RESET) $<"

# Compilação do main.c (que está na raiz)
$(OBJ_DIR)/main.o: main.c | $(OBJ_DIR)
	@mkdir -p $(OBJ_DIR)
	@$(CC) $(CFLAGS) -c $< -o $@
	@echo "$(YELLOW)Compiled:$(RESET) $<"

# Diretório de objetos
$(OBJ_DIR):
	@mkdir -p $(OBJ_DIR)

clean:
	@echo "$(RED)🧹 Removing object files...$(RESET)"
	@rm -rf $(OBJ_DIR)

fclean: clean
	@echo "$(RED)🗑️  Removing executables and libraries...$(RESET)"
	@rm -f $(NAME)

re: fclean all

valgrind: $(NAME)
	@valgrind --leak-check=full ./$(NAME) 3 2 1

norm:
	@echo "$(BLUE)📜 Checking Norminette...$(RESET)"
	@norminette $(SRC_DIR) $(INC_DIR)

help:
	@echo "$(YELLOW)Available targets:$(RESET)"
	@echo "  all       – Compila o projeto principal ($(NAME))"
	@echo "  clean     – Remove arquivos objeto"
	@echo "  fclean    – Remove objetos e executáveis"
	@echo "  re        – Reconstrói tudo"
	@echo "  valgrind  – Verifica vazamentos de memória"
	@echo "  norm      – Executa Norminette"
	@echo "  help      – Mostra este menu"

.PHONY: all clean fclean re test valgrind norm help
.SILENT: