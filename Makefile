all:
	verilator --cc --exe --build --trace diff.cpp sim_main.cpp top.v -LDFLAGS "-ldl"
