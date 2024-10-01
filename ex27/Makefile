# ************************************************************************** #
#                                                                            #
#                                                        :::      ::::::::   #
#   Makefile                                           :+:      :+:    :+:   #
#                                                    +:+ +:+         +:+     #
#   By: pjolidon <pjolidon@student.42.fr>          +#+  +:+       +#+        #
#                                                +#+#+#+#+#+   +#+           #
#   Created: 2024/09/16 21:14:00 by pjolidon          #+#    #+#             #
#   Updated: 2024/09/xx xx:xx:00 by pjolidon         ###   ########.fr       #
#                                                                            #
# ************************************************************************** #

BIN		= ft_display_file
LIB		= 
SRC		= *c
HDR		= *h
OBJ		= *o
CPL		= gcc
CLHDR	= includes/*gch
OUT		= -o ${BIN}

LIBFLG	= -c -Wall -Werror -Wextra
CPLFLG	= -Wall -Werror -Wextra
DBGFLG	= -Wall -Werror -Wextra -g3
DGBRUN	= test
RM		= rm -f

${BIN}:
		clear
		${CPL} ${OUT} ${SRC} ${CPLFLG} 

all:	${BIN}

debug:
		clear
		${CPL} ${OUT} ${SRC} ${CPLFLG} ${DBGFLG}
		lldb ${BIN} ${DGBRUN}

clean:
		${RM} ${OBJ}
		${RM} ${CLHDR}

fclean: clean
		${RM} ${BIN}

re:		fclean all

.PHONY:	all clean fclean re