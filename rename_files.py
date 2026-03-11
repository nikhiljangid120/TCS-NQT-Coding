import os
import shutil

base = r'c:\Users\hp\Desktop\TCS NQT'

# Each topic: folder, and [new_simple_name, description] pairs
topics_rename = {
    "01_Array_Manipulation": [
        ("Q1_move_zeroes.cpp",          "Q01_Move_Zeroes_to_End.cpp"),
        ("Q2_rotate_array.cpp",         "Q02_Rotate_Array_K_Steps.cpp"),
        ("Q3_max_subarray_sum.cpp",     "Q03_Find_Maximum_Subarray_Sum.cpp"),
        ("Q4_sort_0s_1s_2s.cpp",        "Q04_Sort_0s_1s_2s_Dutch_National_Flag.cpp"),
        ("Q5_rearrange_pos_neg.cpp",    "Q05_Rearrange_Positive_Negative.cpp"),
        ("Q6_two_sum.cpp",              "Q06_Two_Sum_Target.cpp"),
        ("Q7_remove_duplicates.cpp",    "Q07_Remove_Duplicates_from_Sorted_Array.cpp"),
        ("Q8_second_largest.cpp",       "Q08_Second_Largest_Element.cpp"),
        ("Q9_leaders_in_array.cpp",     "Q09_Leaders_in_Array.cpp"),
        ("Q10_wave_sort.cpp",           "Q10_Wave_Sort_Array.cpp"),
    ],
    "02_String_Processing": [
        ("Q1_reverse_words.cpp",        "Q01_Reverse_Words_in_String.cpp"),
        ("Q2_palindrome.cpp",           "Q02_Check_Palindrome.cpp"),
        ("Q3_anagram.cpp",              "Q03_Check_Anagram.cpp"),
        ("Q4_count_vowels.cpp",         "Q04_Count_Vowels_and_Consonants.cpp"),
        ("Q5_first_nonrepeating.cpp",   "Q05_Find_First_NonRepeating_Character.cpp"),
        ("Q6_longest_prefix.cpp",       "Q06_Longest_Common_Prefix.cpp"),
        ("Q7_string_compress.cpp",      "Q07_String_Compression.cpp"),
        ("Q8_toggle_case.cpp",          "Q08_Toggle_Case_of_String.cpp"),
        ("Q9_permutations.cpp",         "Q09_Find_All_Permutations.cpp"),
        ("Q10_caesar_cipher.cpp",       "Q10_Caesar_Cipher.cpp"),
    ],
    "03_Digit_Number_Mathematics": [
        ("Q1_sum_of_digits.cpp",        "Q01_Sum_of_Digits.cpp"),
        ("Q2_reverse_number.cpp",       "Q02_Reverse_a_Number.cpp"),
        ("Q3_armstrong.cpp",            "Q03_Check_Armstrong_Number.cpp"),
        ("Q4_palindrome_number.cpp",    "Q04_Check_Palindrome_Number.cpp"),
        ("Q5_count_digits.cpp",         "Q05_Count_Digits_in_Number.cpp"),
        ("Q6_gcd_lcm.cpp",              "Q06_Find_GCD_and_LCM.cpp"),
        ("Q7_perfect_number.cpp",       "Q07_Check_Perfect_Number.cpp"),
        ("Q8_prime_sieve.cpp",          "Q08_Prime_Check_and_Sieve.cpp"),
        ("Q9_power_of_two.cpp",         "Q09_Power_of_Two_Check.cpp"),
        ("Q10_digit_frequency.cpp",     "Q10_Digit_Frequency_Counter.cpp"),
    ],
    "04_Bit_Manipulation": [
        ("Q1_odd_even.cpp",             "Q01_Check_Odd_or_Even_using_AND.cpp"),
        ("Q2_xor_unique.cpp",           "Q02_Find_Single_Non_Duplicate_using_XOR.cpp"),
        ("Q3_count_set_bits.cpp",       "Q03_Count_Set_Bits.cpp"),
        ("Q4_set_clear_toggle.cpp",     "Q04_Set_Clear_Toggle_Bit.cpp"),
        ("Q5_missing_number_xor.cpp",   "Q05_Find_Missing_Number_XOR.cpp"),
        ("Q6_swap_no_temp.cpp",         "Q06_Swap_Two_Numbers_without_Temp.cpp"),
        ("Q7_power_of_two.cpp",         "Q07_Power_of_Two_using_Bits.cpp"),
        ("Q8_shift_multiply.cpp",       "Q08_Multiply_Divide_by_2_Shift.cpp"),
        ("Q9_two_unique.cpp",           "Q09_Find_Two_Non_Repeating_Numbers.cpp"),
        ("Q10_bit_reversal.cpp",        "Q10_Bit_Reversal_of_Number.cpp"),
    ],
    "05_Sorting": [
        ("Q1_bubble_sort.cpp",          "Q01_Bubble_Sort.cpp"),
        ("Q2_selection_sort.cpp",       "Q02_Selection_Sort.cpp"),
        ("Q3_insertion_sort.cpp",       "Q03_Insertion_Sort.cpp"),
        ("Q4_merge_sort.cpp",           "Q04_Merge_Sort.cpp"),
        ("Q5_quick_sort.cpp",           "Q05_Quick_Sort.cpp"),
        ("Q6_sort_by_frequency.cpp",    "Q06_Sort_by_Frequency.cpp"),
        ("Q7_count_sort.cpp",           "Q07_Count_Sort.cpp"),
        ("Q8_dutch_national_flag.cpp",  "Q08_Dutch_National_Flag.cpp"),
        ("Q9_sort_strings.cpp",         "Q09_Sort_Array_of_Strings.cpp"),
        ("Q10_kth_largest.cpp",         "Q10_Find_Kth_Largest_Element.cpp"),
    ],
    "06_Modular_Cyclic_Mathematics": [
        ("Q1_day_after_n_days.cpp",     "Q01_Day_of_Week_After_N_Days.cpp"),
        ("Q2_nth_term_cycle.cpp",       "Q02_Find_Nth_Term_With_Cycle.cpp"),
        ("Q3_circular_queue.cpp",       "Q03_Circular_Queue_Simulation.cpp"),
        ("Q4_mod_exponentiation.cpp",   "Q04_Modular_Exponentiation.cpp"),
        ("Q5_clock_angle.cpp",          "Q05_Clock_Hand_Angle.cpp"),
        ("Q6_josephus.cpp",             "Q06_Josephus_Problem.cpp"),
        ("Q7_remainder_pattern.cpp",    "Q07_Find_Pattern_in_Remainder.cpp"),
        ("Q8_rotate_modulo.cpp",        "Q08_Array_Rotation_using_Modulo.cpp"),
        ("Q9_cycle_detection.cpp",      "Q09_Cycle_Detection_using_FloydAlgorithm.cpp"),
        ("Q10_repeating_seq.cpp",       "Q10_Repeating_Sequence_Problem.cpp"),
    ],
    "07_Factorial_and_Combinatorics": [
        ("Q1_factorial.cpp",            "Q01_Factorial_Iterative_and_Recursive.cpp"),
        ("Q2_combination_ncr.cpp",      "Q02_NCR_Combination_Calculator.cpp"),
        ("Q3_permutation_npr.cpp",      "Q03_NPR_Permutation_Calculator.cpp"),
        ("Q4_circular_arrangement.cpp", "Q04_Circular_Arrangement_Count.cpp"),
        ("Q5_trailing_zeros.cpp",       "Q05_Count_Trailing_Zeros_in_Factorial.cpp"),
        ("Q6_pascal_triangle.cpp",      "Q06_Pascal_Triangle.cpp"),
        ("Q7_derangement.cpp",          "Q07_Count_Derangements.cpp"),
        ("Q8_power_set.cpp",            "Q08_Power_Set_Count.cpp"),
        ("Q9_climb_stairs.cpp",         "Q09_Count_Ways_to_Climb_Stairs.cpp"),
        ("Q10_binomial.cpp",            "Q10_Binomial_Coefficient.cpp"),
    ],
    "08_Simulation_and_Conditionals": [
        ("Q1_atm.cpp",                  "Q01_ATM_Machine_Simulation.cpp"),
        ("Q2_number_guess.cpp",         "Q02_NumberGuessing_Game.cpp"),
        ("Q3_parking_lot.cpp",          "Q03_Parking_Lot_System.cpp"),
        ("Q4_traffic_light.cpp",        "Q04_Traffic_Light_Simulation.cpp"),
        ("Q5_elevator.cpp",             "Q05_Elevator_Simulation.cpp"),
        ("Q6_salary_calc.cpp",          "Q06_Employee_Salary_Calculator.cpp"),
        ("Q7_vending_machine.cpp",      "Q07_Vending_Machine.cpp"),
        ("Q8_bank_account.cpp",         "Q08_Bank_Account_Transactions.cpp"),
        ("Q9_grade_calc.cpp",           "Q09_Grade_Calculator_with_Conditions.cpp"),
        ("Q10_library.cpp",             "Q10_Library_Book_Management.cpp"),
    ],
    "09_CPP_Essentials": [
        ("Q1_vector_ops.cpp",           "Q01_STL_Vector_Operations.cpp"),
        ("Q2_map_unordered_map.cpp",    "Q02_STL_Map_and_Unordered_Map.cpp"),
        ("Q3_set_ops.cpp",              "Q03_STL_Set_Operations.cpp"),
        ("Q4_stack_queue.cpp",          "Q04_STL_Stack_Queue_Usage.cpp"),
        ("Q5_sort_comparators.cpp",     "Q05_STL_Sort_with_Comparators.cpp"),
        ("Q6_string_functions.cpp",     "Q06_String_Functions_Reference.cpp"),
        ("Q7_two_pointer.cpp",          "Q07_Two_Pointer_Template.cpp"),
        ("Q8_prefix_sum.cpp",           "Q08_Prefix_Sum_Template.cpp"),
        ("Q9_fast_io_template.cpp",     "Q09_Fast_IO_and_Universal_Template.cpp"),
        ("Q10_algorithm_patterns.cpp",  "Q10_Common_Algorithm_Patterns.cpp"),
    ],
}

renamed = 0
for folder, pairs in topics_rename.items():
    for (new_name, old_name) in pairs:
        old_path = os.path.join(base, folder, old_name)
        new_path = os.path.join(base, folder, new_name)
        if os.path.exists(old_path):
            os.rename(old_path, new_path)
            print(f"Renamed: {old_name}  →  {new_name}")
            renamed += 1
        else:
            print(f"NOT FOUND: {old_path}")

print(f"\nTotal renamed: {renamed}")
