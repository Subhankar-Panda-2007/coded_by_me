#!/bin/bash
while true
do
    clear
    gcc engine.c -o main
    
    # Check if GCC compilation failed
    if [ $? -ne 0 ]; then
        echo ""
        echo "[Error] Compilation failed! Fix your code and press Enter to try again."
        read
        continue
    fi

    echo "--------------------------------------------------"
    ./main
    
    # Capture the exit code of your C program
    EXIT_CODE=$?
    
    # If the program returned 1, loop back and restart
    if [ $EXIT_CODE -eq 1 ]; then
        echo ""
        echo "=================================================="
        echo "[System]Restarting engine..."
        echo "=================================================="
        sleep 3
    else
        # If it returned 0 (or anything other than 1), exit the script completely
        echo ""
        break
    fi
done
