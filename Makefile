


NAME = scop
CC = g++ 
CFLAGS =  -std=c++11
OPENGL = -lglut -lGLU -lGL -lglfw  

SRCS =	main.cpp	\
		parsing.cpp	\
		glad.c
	
SOURCES = $(addprefix sources/, $(SRCS)) \
			$(addprefix sources/classes/, $(CLASS))

all: COMP

COMP: $(SOURCES)
	$(CC) $(CFLAGS) $(SOURCES) $(OPENGL) -o $(NAME)



clean:
	rm -rf $(NAME)

fclean: clean
	rm -rf sources/classes/*.o
	rm -rf sources/*.o


re: fclean all

.PHONY: all clean fclean re