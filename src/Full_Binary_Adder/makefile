# SET FILE NAME IN VARIABLE
FILE = Full_Binary_Adder
TEST_FILE = $(FILE)_tb

default: $(TEST_FILE).sv
	@echo "-- Verilator testing ----"
	@echo "-- VERILATE & BUILD -----"
	verilator --binary --timing --Wall -j 0 $(TEST_FILE).sv
	@echo ""
	@echo "-- RUN & TEST -----------"
	@obj_dir/V$(TEST_FILE)
	@echo "-- DONE -----------------"

wave: $(TEST_FILE).sv
	@echo "-- Verilator testing ----"
	@echo "-- VERILATE & BUILD -----"
	verilator --binary --timing --trace --Wall -j 0 $(TEST_FILE).sv
	@echo ""
	@echo "-- TEST & WAVEFORM GEN --"
	@obj_dir/V$(TEST_FILE)
	@echo "-- DONE -----------------"

clean mostlyclean distclean maintainer-clean:
	@-rm -rf obj_dir *.log *.dmp *.vpd *.fst *.vcd core
