

LIBS := -lwthttp -lwt -lwtdbo -lwtdbosqlite3 -lboost_signals -lboost_system -lcrypt

SRCS := Dictionary.cc hangman.cc HangmanGame.cc HangmanWidget.cc \
	HighScoresWidget.cc ImagesWidget.cc LettersWidget.cc \
	Session.cc User.cc WordWidget.cc

HDRS := Dictionary.h HangmanGame.h HangmanWidget.h HighScoresWidget.h \
	ImagesWidget.h LettersWidget.h Session.h User.h WordWidget.h

target := hangman

run: $(target)
	./$(target) --docroot . --http-address 0.0.0.0 --http-port 9090

$(target): $(SRCS) $(HDRS)
	g++ -o $@ $(SRCS) $(LIBS)

clean:
	rm -f $(target) core

realclean: clean
	rm -f hangman.db
