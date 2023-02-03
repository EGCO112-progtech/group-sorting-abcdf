compile: main.c 
	 gcc  main.c -o sort

runSelection: selection
	  ./selection

run: bubble
	 ./sort


clean: bubble
	 rm bubble
