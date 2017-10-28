all:main

main:main.o mgs.o mkl.o prl.o mrg.o slt.o mr3.o sp3.o
	cc -o main *.o
clean:
	@echo "cleaning..."
	-rm *.o main
	@echo "finish"
