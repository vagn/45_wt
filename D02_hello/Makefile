
LIBS := -lwthttp -lwt -lboost_signals

target := hello

run: $(target)
	./$(target) --docroot . --http-address 0.0.0.0 --http-port 9090

$(target): $(target).cc
	g++ -o $@ $< $(LIBS)

clean:
	rm $(target)

