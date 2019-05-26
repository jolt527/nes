SRC_DIR = src
TST_DIR = tst
BIN_DIR = bin

cpu-test: make-bin-directory
	g++ -I$(SRC_DIR) $(TST_DIR)/CpuTest.cpp $(SRC_DIR)/Cpu.cpp -o $(BIN_DIR)/$@

make-bin-directory:
	mkdir -p $(BIN_DIR)

clean:
	rm -rf $(BIN_DIR)
