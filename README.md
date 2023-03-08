To compile the program:
- Run make, to compile all the files.
- Make sure to include main4.c and readerwriterlockexample.h on the same directory.
- Alternatively, could also run gcc -o rwmain main4.c -l pthread.

To run the program:
- Include scenarios.txt to run an scenario for the program.
- In addition, you could modify that scenario to test other scenarios (1 scenario per run). 
- run ./rwmain to see the result.

For scenerio, 
rrrrwrrr
rrwrrwwr
rrwwrrww
rrrrwwrw
wwrrrwrw
rrwwrrrr
rwrwrwrw


$ make
gcc     -o      rwmain  main4.c   -l      pthread
 ./rwmain
 Scenario Starts:
Create Reader.
Create Reader.
Reader is reading
Reader is done
Reader is reading
Reader is done
Create Reader.
Create Reader.
Reader is reading
Reader is reading
Reader is done
Create Writer.
Reader is done
Create Reader.
Writer is writing
Create Reader.
Writing is done
Reader is reading
Create Reader.
Reader is reading
Reader is done
Create Reader.
Reader is done
Create Reader.
Reader is reading
Reader is reading
Reader is done
Reader is done
Reader is reading
Reader is done
Create Writer.
Create Reader.
Writer is writing
Writing is done
Create Reader.
Reader is reading
Reader is done
Reader is reading
Reader is done
Create Writer.
Create Writer.
Writer is writing
Create Reader.
Writing is done
Writer is writing
Create Reader.
Writing is done
Reader is reading
Create Reader.
Reader is done
Create Writer.
Reader is reading
Create Writer.
Reader is reading
Create Reader.
Reader is done
Create Reader.
Writer is writing
Create Writer.
Reader is done
Create Writer.
Writer is writing
Create Reader.
Writing is done
Create Reader.
Reader is reading
Create Reader.
Writing is done
Create Reader.
Reader is done
Create Writer.
Reader is reading
Create Writer.
Reader is done
Create Reader.
Writer is writing
Create Writer.
Writing is done
Create Writer.
Writer is writing
Create Writer.
Writing is done
Create Reader.
Reader is reading
Create Reader.
Reader is reading
Create Reader.
Reader is reading
Create Writer.
Reader is reading
Create Reader.
Reader is done
Create Writer.
Reader is done
Create Reader.
Writer is writing
Create Reader.
Reader is done
Create Writer.
Writing is done
Create Writer.
Reader is done
Create Reader.
Writer is writing
Create Reader.
Writing is done
Create Reader.
Reader is reading
Create Reader.
Reader is done
Create Reader.
Writer is writing
Create Writer.
Writing is done
Create Reader.
Writer is writing
Create Writer.
Writer is writing
Create Reader.
Writing is done
Create Writer.
Reader is reading
Create Reader.
Reader is reading
Create Writer.
Reader is reading
Reader is done
Writing is done
Reader is done
Reader is done
Writer is writing
Writing is done
Reader is reading
Reader is done
Writer is writing
Writing is done
Reader is reading
Reader is reading
Reader is done
Reader is done
Writer is writing
Writing is done
Writer is writing
Writing is done
Reader is reading
Reader is reading
Reader is reading
Reader is reading
Reader is reading
Reader is done
Reader is done
Reader is done
Reader is done
Reader is done
Writer is writing
Writing is done
Reader is reading
Reader is done
Writer is writing
Writing is done
Reader is reading
Reader is done
Writer is writing
Writing is done
Reader is reading
Reader is done
Writer is writing
Writing is done