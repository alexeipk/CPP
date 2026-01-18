# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aprotoce <aprotoce@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/04/30 21:59:33 by aprotoce          #+#    #+#              #
#    Updated: 2022/05/22 21:09:31 by aprotoce         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = convert

CC = c++
CFLAGS = -Wall -Wextra -Werror -g -std=c++98
SRC = main.cpp conversion.cpp

# Reset
Color_Off='\033[0m'       # Text Reset

# Regular Colors
Black='\033[0;30m'        # Black
Red='\033[0;31m'          # Red
Green='\033[0;32m'        # Green
Yellow='\033[0;33m'       # Yellow
Blue='\033[0;34m'         # Blue
Purple='\033[0;35m'       # Purple
Cyan='\033[0;36m'         # Cyan
White='\033[0;37m'        # White

# Bold
BBlack='\033[1;30m'       # Black
BRed='\033[1;31m'         # Red
BGreen='\033[1;32m'       # Green
BYellow='\033[1;33m'      # Yellow
BBlue='\033[1;34m'        # Blue
BPurple='\033[1;35m'      # Purple
BCyan='\033[1;36m'        # Cyan
BWhite='\033[1;37m'       # White

# Underline
UBlack='\033[4;30m'       # Black
URed='\033[4;31m'         # Red
UGreen='\033[4;32m'       # Green
UYellow='\033[4;33m'      # Yellow
UBlue='\033[4;34m'        # Blue
UPurple='\033[4;35m'      # Purple
UCyan='\033[4;36m'        # Cyan
UWhite='\033[4;37m'       # White

# Background
On_Black='\033[40m'       # Black
On_Red='\033[41m'         # Red
On_Green='\033[42m'       # Green
On_Yellow='\033[43m'      # Yellow
On_Blue='\033[44m'        # Blue
On_Purple='\033[45m'      # Purple
On_Cyan='\033[46m'        # Cyan
On_White='\033[47m'       # White

# High Intensity
IBlack='\033[0;90m'       # Black
IRed='\033[0;91m'         # Red
IGreen='\033[0;92m'       # Green
IYellow='\033[0;93m'      # Yellow
IBlue='\033[0;94m'        # Blue
IPurple='\033[0;95m'      # Purple
ICyan='\033[0;96m'        # Cyan
IWhite='\033[0;97m'       # White

# Bold High Intensity
BIBlack='\033[1;90m'      # Black
BIRed='\033[1;91m'        # Red
BIGreen='\033[1;92m'      # Green
BIYellow='\033[1;93m'     # Yellow
BIBlue='\033[1;94m'       # Blue
BIPurple='\033[1;95m'     # Purple
BICyan='\033[1;96m'       # Cyan
BIWhite='\033[1;97m'      # White

# High Intensity backgrounds
On_IBlack='\033[0;100m'   # Black
On_IRed='\033[0;101m'     # Red
On_IGreen='\033[0;102m'   # Green
On_IYellow='\033[0;103m'  # Yellow
On_IBlue='\033[0;104m'    # Blue
On_IPurple='\033[0;105m'  # Purple
On_ICyan='\033[0;106m'    # Cyan
On_IWhite='\033[0;107m'   # White


OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	@echo ${Yellow}"Compiling..."
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)
	@echo "\033[0m"

.cpp.o: 
	@echo ${Green}"Generating obj..."
	$(CC) $(CFLAGS) -c $< 
	@echo "\033[0m"

clean:
	@echo ${Red}"Cleaning..."
	rm -f $(OBJ)
	@echo "\033[0m"

fclean: clean
	@echo ${Red}"Removing executable..."
	rm -f $(NAME)
	@echo "\033[0m"

re: fclean all

run:
	@make re
	@echo "\n\n"
	@echo ${BPurple}"No argument test------------------------------------\033[0m"
	./convert  
	@echo "\n\n" 
	
	@echo ${BPurple}"Invalid inputs tests--------------------------------" 
	@echo "\033[0m" 
	./convert 🌊 
	./convert 🌊🌊
	./convert teste
	./convert "teste"
	./convert 'teste'
	./convert 9f
	./convert 99f
	./convert 0000r
	./convert ' '
	./convert '   '
	./convert '\n'
	./convert '\t'
	./convert '\r'
	./convert '\v'
	./convert '\b'
	./convert '\f'
	./convert '\a'
	./convert '\e'
	./convert '\0'
	./convert '\x0'
	./convert '\x0f'
	./convert " "
	./convert "   "
	@echo "\n\n"
	
	@echo ${BPurple}"Limits tests----------------------------------------"
	@echo "\033[0m"
	./convert 2147483647
	./convert -2147483648
	./convert 2147483648
	./convert -2147483649
	./convert 340282346638528859811704183484516925440.0f
	./convert -340282346638528859811704183484516925440.0000000000000000f
	./convert 340282446638528859811704183484516925455.9f
	./convert -340282446638528859811704183484516925499.9900000000000000f
	./convert 179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.0
	./convert -179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.0
	./convert 179769313486239570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858399.9
	./convert -179769313486239570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858399.9
	@echo "\n\n"
	
	@echo ${BPurple}"Char tests----------------------------------------"
	@echo "\033[0m"
	./convert 'A'
	./convert 'l'
	./convert 'e'
	./convert 'x'
	./convert '/'
	./convert '?'
	./convert ':'
	./convert '%'
	@echo "\n\n"
	
		
	@echo ${BPurple}"Integer tests----------------------------------------"
	@echo "\033[0m"
	./convert 0
	./convert 1
	./convert -1
	./convert 42
	./convert 65
	./convert 314
	@echo "\n\n"
	
		
	@echo ${BPurple}"Float tests----------------------------------------"
	@echo "\033[0m"
	./convert 0.0f
	./convert 1.1f
	./convert -1.1f
	./convert 42.42f
	./convert 65.56f
	./convert 3.14f
	@echo "\n\n"

		
	@echo ${BPurple}"Double tests----------------------------------------"
	@echo "\033[0m"
	./convert 0.0
	./convert 1.1
	./convert -1.1
	./convert 42.42
	./convert 65.56
	./convert 3.14
	@echo "\n\n"



	@echo ${BPurple}"Pseudo Literal tests----------------------------------------"
	@echo "\033[0m"
	./convert nan
	./convert nanf
	./convert +inf
	./convert -inf
	./convert +inff
	./convert -inff
	@echo "\n\n"


val:
	@make re
	valgrind ./$(NAME)

.PHONY: all re clean fclean
