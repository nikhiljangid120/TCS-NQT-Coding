import os

base = r'c:\Users\hp\Desktop\TCS NQT'

# ─────────────────────────────────────────────────────────────────
# TOPIC DEFINITIONS  (folder_name, question_files, theory_file)
# ─────────────────────────────────────────────────────────────────
topics = [
    {
        "folder": "01_Array_Manipulation",
        "questions": [
            "Q01_Move_Zeroes_to_End.cpp",
            "Q02_Rotate_Array_K_Steps.cpp",
            "Q03_Find_Maximum_Subarray_Sum.cpp",
            "Q04_Sort_0s_1s_2s_Dutch_National_Flag.cpp",
            "Q05_Rearrange_Positive_Negative.cpp",
            "Q06_Two_Sum_Target.cpp",
            "Q07_Remove_Duplicates_from_Sorted_Array.cpp",
            "Q08_Second_Largest_Element.cpp",
            "Q09_Leaders_in_Array.cpp",
            "Q10_Wave_Sort_Array.cpp",
        ],
        "theory": "Array_Theory.md",
    },
    {
        "folder": "02_String_Processing",
        "questions": [
            "Q01_Reverse_Words_in_String.cpp",
            "Q02_Check_Palindrome.cpp",
            "Q03_Check_Anagram.cpp",
            "Q04_Count_Vowels_and_Consonants.cpp",
            "Q05_Find_First_NonRepeating_Character.cpp",
            "Q06_Longest_Common_Prefix.cpp",
            "Q07_String_Compression.cpp",
            "Q08_Toggle_Case_of_String.cpp",
            "Q09_Find_All_Permutations.cpp",
            "Q10_Caesar_Cipher.cpp",
        ],
        "theory": "String_Theory.md",
    },
    {
        "folder": "03_Digit_Number_Mathematics",
        "questions": [
            "Q01_Sum_of_Digits.cpp",
            "Q02_Reverse_a_Number.cpp",
            "Q03_Check_Armstrong_Number.cpp",
            "Q04_Check_Palindrome_Number.cpp",
            "Q05_Count_Digits_in_Number.cpp",
            "Q06_Find_GCD_and_LCM.cpp",
            "Q07_Check_Perfect_Number.cpp",
            "Q08_Prime_Check_and_Sieve.cpp",
            "Q09_Power_of_Two_Check.cpp",
            "Q10_Digit_Frequency_Counter.cpp",
        ],
        "theory": "Digit_Number_Math_Theory.md",
    },
    {
        "folder": "04_Bit_Manipulation",
        "questions": [
            "Q01_Check_Odd_or_Even_using_AND.cpp",
            "Q02_Find_Single_Non_Duplicate_using_XOR.cpp",
            "Q03_Count_Set_Bits.cpp",
            "Q04_Set_Clear_Toggle_Bit.cpp",
            "Q05_Find_Missing_Number_XOR.cpp",
            "Q06_Swap_Two_Numbers_without_Temp.cpp",
            "Q07_Power_of_Two_using_Bits.cpp",
            "Q08_Multiply_Divide_by_2_Shift.cpp",
            "Q09_Find_Two_Non_Repeating_Numbers.cpp",
            "Q10_Bit_Reversal_of_Number.cpp",
        ],
        "theory": "Bit_Manipulation_Theory.md",
    },
    {
        "folder": "05_Sorting",
        "questions": [
            "Q01_Bubble_Sort.cpp",
            "Q02_Selection_Sort.cpp",
            "Q03_Insertion_Sort.cpp",
            "Q04_Merge_Sort.cpp",
            "Q05_Quick_Sort.cpp",
            "Q06_Sort_by_Frequency.cpp",
            "Q07_Count_Sort.cpp",
            "Q08_Dutch_National_Flag.cpp",
            "Q09_Sort_Array_of_Strings.cpp",
            "Q10_Find_Kth_Largest_Element.cpp",
        ],
        "theory": "Sorting_Theory.md",
    },
    {
        "folder": "06_Modular_Cyclic_Mathematics",
        "questions": [
            "Q01_Day_of_Week_After_N_Days.cpp",
            "Q02_Find_Nth_Term_With_Cycle.cpp",
            "Q03_Circular_Queue_Simulation.cpp",
            "Q04_Modular_Exponentiation.cpp",
            "Q05_Clock_Hand_Angle.cpp",
            "Q06_Josephus_Problem.cpp",
            "Q07_Find_Pattern_in_Remainder.cpp",
            "Q08_Array_Rotation_using_Modulo.cpp",
            "Q09_Cycle_Detection_using_FloydAlgorithm.cpp",
            "Q10_Repeating_Sequence_Problem.cpp",
        ],
        "theory": "Modular_Cyclic_Math_Theory.md",
    },
    {
        "folder": "07_Factorial_and_Combinatorics",
        "questions": [
            "Q01_Factorial_Iterative_and_Recursive.cpp",
            "Q02_NCR_Combination_Calculator.cpp",
            "Q03_NPR_Permutation_Calculator.cpp",
            "Q04_Circular_Arrangement_Count.cpp",
            "Q05_Count_Trailing_Zeros_in_Factorial.cpp",
            "Q06_Pascal_Triangle.cpp",
            "Q07_Count_Derangements.cpp",
            "Q08_Power_Set_Count.cpp",
            "Q09_Count_Ways_to_Climb_Stairs.cpp",
            "Q10_Binomial_Coefficient.cpp",
        ],
        "theory": "Factorial_Combinatorics_Theory.md",
    },
    {
        "folder": "08_Simulation_and_Conditionals",
        "questions": [
            "Q01_ATM_Machine_Simulation.cpp",
            "Q02_NumberGuessing_Game.cpp",
            "Q03_Parking_Lot_System.cpp",
            "Q04_Traffic_Light_Simulation.cpp",
            "Q05_Elevator_Simulation.cpp",
            "Q06_Employee_Salary_Calculator.cpp",
            "Q07_Vending_Machine.cpp",
            "Q08_Bank_Account_Transactions.cpp",
            "Q09_Grade_Calculator_with_Conditions.cpp",
            "Q10_Library_Book_Management.cpp",
        ],
        "theory": "Simulation_Conditionals_Theory.md",
    },
    {
        "folder": "09_CPP_Essentials",
        "questions": [
            "Q01_STL_Vector_Operations.cpp",
            "Q02_STL_Map_and_Unordered_Map.cpp",
            "Q03_STL_Set_Operations.cpp",
            "Q04_STL_Stack_Queue_Usage.cpp",
            "Q05_STL_Sort_with_Comparators.cpp",
            "Q06_String_Functions_Reference.cpp",
            "Q07_Two_Pointer_Template.cpp",
            "Q08_Prefix_Sum_Template.cpp",
            "Q09_Fast_IO_and_Universal_Template.cpp",
            "Q10_Common_Algorithm_Patterns.cpp",
        ],
        "theory": "CPP_Essentials_Theory.md",
    },
]

created = []

for topic in topics:
    folder_path = os.path.join(base, topic["folder"])
    os.makedirs(folder_path, exist_ok=True)

    # Create blank question files
    for qfile in topic["questions"]:
        fpath = os.path.join(folder_path, qfile)
        if not os.path.exists(fpath):
            with open(fpath, 'w', encoding='utf-8') as f:
                f.write("")  # blank file
            created.append(fpath)

    # Create blank theory file (will be filled by next script)
    tpath = os.path.join(folder_path, topic["theory"])
    if not os.path.exists(tpath):
        with open(tpath, 'w', encoding='utf-8') as f:
            f.write("")  # blank — filled next
        created.append(tpath)

print(f"Created {len(created)} files across {len(topics)} topic folders.")
for f in created:
    print(" ", f)
