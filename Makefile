##
## EPITECH PROJECT, 2017
## Makefile
## File description:
## makefile
##

NAME		=	my_cook

CC		=	cc

CFLAGS		+=	-g -I include/

LDFLAGS		+=	-L lib/my/ -lmy -l c_graph_prog

FILES		=	main_cook.c						\
			sources/menu/menu.c					\
			sources/menu/menu2.c					\
			sources/menu/menu_recipes.c				\
			sources/menu/menusetup.c				\
			sources/menu/menu_buttons.c				\
			sources/menu/menu_recipes_setup.c			\
			sources/menu/menu_setting_setup.c			\
			sources/menu/menu_setting.c				\
			sources/menu/menu_setting2.c				\
			sources/menu/pause_menu.c				\
			sources/menu/pause_menu_setup.c				\
			sources/menu/pause_menu_settings.c			\
			sources/menu/book_setup.c				\
			sources/gestion/prog.c					\
			sources/gestion/draw.c					\
			sources/gestion/draw_text.c					\
			sources/gestion/destroy.c				\
			sources/gestion/destroy2.c				\
			sources/gestion/destroy3.c				\
			sources/gestion/tab_int.c				\
			sources/gestion/event.c					\
			sources/sounds/sounds.c					\
			sources/sounds/volume.c					\
			sources/sounds/volume2.c				\
			sources/game/gamesetup.c				\
			sources/game/game.c					\
			sources/characters/characters_setup.c			\
			sources/characters/character_handle.c			\
			sources/characters/characters.c				\
			sources/recipe_system/read_file.c			\
			sources/recipe_system/recipes_system.c			\
			sources/recipe_system/recipes.c				\
			sources/recipe_system/recipes_setup.c			\
			sources/recipe_system/recipes_setup2.c			\
			sources/recipe_system/event_recipes.c			\
			sources/recipe_system/event_recipes2.c			\
			sources/recipe_system/draw_recipes_sprites.c		\
			sources/recipe_system/draw_recipes_sprites2.c		\
			sources/recipe_system/book_recipes_setup.c		\
			sources/ingredients/ingredients_setup.c			\
			sources/ingredients/ingredients_setup_ramen.c		\
			sources/ingredients/ingredients_setup_ramen2.c		\
			sources/ingredients/ingredients_square_setup.c		\
			sources/ingredients/ingredients_square_setup_ramen.c	\
			sources/ingredients/ingredients_square_setup_ramen2.c	\

SRCS		=	$(FILES)

OBJ		=	$(SRCS:.c=.o) $(MAIN:.c=.o)

all:			$(NAME)


.PHONY: fclean clean all re

RED		=	\033[0;31m
GREEN		=	\033[0;32m
NC		=	\033[0m
GREY		=	\033[90m
BG_COLOR	=	\033[46m

$(NAME):	$(OBJ)
	@echo -e '${BG_COLOR}Flags: $(LDFLAGS) $(CFLAGS)${NC}'
	@echo -e '${RED}Create${NC}: ${GREY}./$(NAME)${NC}'
	@make -C lib/my/
	@$(CC) $(OBJ) -o $(NAME) $(LDFLAGS)

%.o:		%.c
	@echo -e '${GREEN} [ OK ]${NC} Build $<'
	@$(CC) -o $@ -c $< $(LDFLAGS) $(CFLAGS)


clean:
	@rm -rf $(OBJ)
	@rm -rf $(OBJ_T)
	@rm -rf vgcore.*
	@rm -f gmon.out
	@rm -rf a.out
	@find . -name *.gc* -delete
	@echo -e '${RED}Clean${NC} : OK'
	@make clean -C lib/my/

fclean:		clean
	@rm -rf $(NAME)
	@echo -e '${RED}Fclean${NC}: ./$(NAME) removed'
	@make fclean -C lib/my/

re:		fclean all
