CFLAGS=-ldl
all:
	$(MAKE) -C $(NEMU_HOME)
	verilator --cc --exe --build --trace -LDFLAGS "-ldl" -I/home/ubuntu/Desktop/riscv sim_main.cpp diff.c top.v
