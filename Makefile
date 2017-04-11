.PHONY: clean All

All:
	@echo "----------Building project:[ opdracht_3_5 - Debug ]----------"
	@cd "opdracht_3_5" && "$(MAKE)" -f  "opdracht_3_5.mk"
clean:
	@echo "----------Cleaning project:[ opdracht_3_5 - Debug ]----------"
	@cd "opdracht_3_5" && "$(MAKE)" -f  "opdracht_3_5.mk" clean
