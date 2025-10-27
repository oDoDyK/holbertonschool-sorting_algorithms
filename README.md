# C - Sorting Algorithms & Big O ⚡

---

## ⚙️ Description
This project focuses on implementing and analyzing multiple **sorting algorithms** in C.  
Each algorithm sorts a list or an array in ascending order and demonstrates different approaches to sorting — from simple comparison-based methods to more efficient divide-and-conquer algorithms.  
In addition, each algorithm’s **time complexity** is analyzed using **Big O notation**.

---

## 🧩 Project Files

| File | Description |
|------|--------------|
| `0-bubble_sort.c` | Sorts an array of integers in ascending order using the **Bubble Sort** algorithm |
| `1-insertion_sort_list.c` | Sorts a doubly linked list using the **Insertion Sort** algorithm |
| `2-selection_sort.c` | Sorts an array of integers using the **Selection Sort** algorithm |
| `3-quick_sort.c` | Sorts an array of integers using the **Quick Sort (Lomuto partition scheme)** |
| `100-shell_sort.c` | Sorts an array using the **Shell Sort algorithm (Knuth sequence)** |
| `101-cocktail_sort_list.c` | Sorts a doubly linked list using the **Cocktail Shaker Sort** algorithm |
| `102-counting_sort.c` | Sorts an array of integers using the **Counting Sort** algorithm |
| `103-merge_sort.c` | Sorts an array of integers using the **Merge Sort** algorithm |
| `104-heap_sort.c` | Sorts an array of integers using the **Heap Sort** algorithm |
| `105-radix_sort.c` | Sorts an array of integers using the **Radix Sort** algorithm |
| `106-bitonic_sort.c` | Sorts an array of integers using the **Bitonic Sort** algorithm |
| `107-quick_sort_hoare.c` | Sorts an array of integers using the **Quick Sort (Hoare partition scheme)** |
| `1000-sort_deck.c` | Sorts a **deck of cards** by suit and value |

---

## 📊 Big O Notation Files

Each algorithm has an associated file (`*-O`) containing its **time complexity**:

| File | Algorithm | Best Case | Average Case | Worst Case |
|------|------------|------------|----------------|---------------|
| `0-O` | Bubble Sort | O(n) | O(n²) | O(n²) |
| `1-O` | Insertion Sort | O(n) | O(n²) | O(n²) |
| `2-O` | Selection Sort | O(n²) | O(n²) | O(n²) |
| `3-O` | Quick Sort (Lomuto) | O(n log n) | O(n log n) | O(n²) |
| `100-O` | Shell Sort | Depends on gap sequence | - | - |
| `101-O` | Cocktail Shaker Sort | O(n) | O(n²) | O(n²) |
| `102-O` | Counting Sort | O(n + k) | O(n + k) | O(n + k) |
| `103-O` | Merge Sort | O(n log n) | O(n log n) | O(n log n) |
| `104-O` | Heap Sort | O(n log n) | O(n log n) | O(n log n) |
| `105-O` | Radix Sort | O(nk) | O(nk) | O(nk) |
| `106-O` | Bitonic Sort | O(n log² n) | O(n log² n) | O(n log² n) |
| `107-O` | Quick Sort (Hoare) | O(n log n) | O(n log n) | O(n²) |

---

## 🧰 Helper Files

| File | Description |
|------|--------------|
| `print_array.c` | Prints an array of integers |
| `print_list.c` | Prints a doubly linked list |
| `sort.h` | Header file with all prototypes and data structures |
| `deck.h` | Header defining card and deck structures |
| `main.c` | Test files for each sorting algorithm |

---

## 🧠 Learning Objectives

- Understand what **sorting algorithms** are and how they differ.  
- Learn about **time complexity** and **Big O notation**.  
- Compare simple algorithms (Bubble, Selection, Insertion) with more advanced ones (Quick, Merge, Heap).  
- Understand how different data structures (arrays, linked lists) affect sorting performance.  
- Learn about **stability**, **space complexity**, and **in-place sorting**.

---

## 🏗️ Requirements

- Allowed editors: **vi**, **vim**, **emacs**
- All your files will be compiled on Ubuntu 20.04 LTS using gcc, using the options **-Wall -Werror -Wextra -pedantic -std=gnu89**
- All your files should end with a new line
- A **README.md** file, at the root of the folder of the project, is mandatory
- Your code should use the Betty style. It will be checked using **betty-style.pl** and **betty-doc.pl**
- You are not allowed to use global variables
- No more than 5 functions per file
- Unless specified otherwise, you are not allowed to use the standard library. Any use of functions like **printf**, **puts**, … is totally forbidden.
- In the following examples, the main.c files are shown as examples. You can use them to test your functions, but you don’t have to push them to your repo (if you do we won’t take them into account). We will use our own **main.c** files at compilation. Our **main.c** files might be different from the one shown in the examples
- The prototypes of all your functions should be included in your header file called **sort.h**
- Don’t forget to push your header file
- All your header files should be include guarded
- A list/array does not need to be sorted if its size is less than 2.

---

## 🚀 Usage Example

 ```
 gcc -Wall -Wextra -Werror -pedantic -std=gnu89 0-main.c 0-bubble_sort.c print_array.c -o bubble
 ./bubble
 ```

Example Output

 ```
 19, 48, 99, 71, 13, 52, 96, 73, 86, 7
 19, 48, 71, 13, 52, 96, 73, 86, 7, 99
 ...
 ```

---

## ✍️Authors

## 👨🏽‍💻 Mohammed Abdulrahman Basuliman
📍 Riyadh, Saudi Arabia  
🎓 IT Student at Saudi Electronic University  
🎓 Student at Holberton School  
📧 4thkiller2005@gmail.com  
🔗 GitHub: [oDoDyK](https://github.com/oDoDyK)

## 👩🏻‍💻 Nada Ghannam Al-Mutairi
📍 Riyadh, Saudi Arabia  
🎓 IS Student at AlMaarefa University  
🎓 Student at Holberton School  
📧 Nada.ghannam19@gmail.com  
🔗 GitHub: [NadaGhannam25](https://github.com/NadaGhannam25)
