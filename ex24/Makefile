# ************************************************************************** #
#                                                                            #
#                                                        :::      ::::::::   #
#   Makefile                                           :+:      :+:    :+:   #
#                                                    +:+ +:+         +:+     #
#   By: pjolidon <pjolidon@student.42.fr>          +#+  +:+       +#+        #
#                                                +#+#+#+#+#+   +#+           #
#   Created: 2024/09/15 21:52:00 by pjolidon          #+#    #+#             #
#   Updated: 2024/09/16 19:46:00 by pjolidon         ###   ########.fr       #
#                                                                            #
# ************************************************************************** #

BIN		= mylibs
LIB		= libft.a
SRC		= srcs/*c
HDR		= includes/*h
OBJ		= *o
CPL		= gcc
CLHDR	= includes/*gch

LIBFLG	= -c -Wall -Werror -Wextra
CPLFLG	= -Wall -Werror -Wextra
DBGFLG	= -Wall -Werror -Wextra -g3
RM		= rm -f

${BIN}:
		${CPL} ${SRC} ${HDR} ${LIBFLG}
		ar rc ${LIB} ${OBJ}
		ranlib ${LIB}

all:	${BIN}

clean:
		${RM} ${OBJ}
		${RM} ${CLHDR}

fclean: clean
		${RM} ${BIN}
		${RM} ${LIB}

re:		fclean all

.PHONY:	all clean fclean re
