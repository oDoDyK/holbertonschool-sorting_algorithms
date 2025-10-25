# 🟦 C - Sorting Algorithms & Big O 📊⚡

---

## 📑 Table of Contents
- [⚙️ Description](#⚙️-description)
- [🧩 Project Files](#🧩-project-files)
- [📊 Big O Notation Files](#📊-big-o-notation-files)
- [🧰 Helper Files](#🧰-helper-files)
- [🧠 Learning Objectives](#🧠-learning-objectives)
- [🏗️ Requirements](#🏗️-requirements)
- [🚀 Usage Example](#🚀-usage-example)
- [🧮 Concept Summary](#🧮-concept-summary)
- [✍️ Authors](#✍️-authors)

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
| `main.c` files | Test files for each sorting algorithm |

---

## 🧠 Learning Objectives

- Understand what **sorting algorithms** are and how they differ.  
- Learn about **time complexity** and **Big O notation**.  
- Compare simple algorithms (Bubble, Selection, Insertion) with more advanced ones (Quick, Merge, Heap).  
- Understand how different data structures (arrays, linked lists) affect sorting performance.  
- Learn about **stability**, **space complexity**, and **in-place sorting**.

---

## 🏗️ Requirements

- **Allowed editors:** `vi`, `vim`, `emacs`  
- **Compilation:**  
  ```bash
  gcc -Wall -Wextra -Werror -pedantic -std=gnu89 *.c -o sort

---

- All files should end with a new line.

- Code must follow Betty coding style.

- No global variables.

- No more than 5 functions per file.

- You are allowed to use the standard library.

- All function prototypes must be declared in sort.h.

- All header files must be include-guarded.

---

## 🚀 Usage Example

 ```bash
 gcc -Wall -Wextra -Werror -pedantic -std=gnu89 0-main.c 0-bubble_sort.c print_array.c -o bubble
 ./bubble
 ```

Example Output

 ```bash
 19, 48, 99, 71, 13, 52, 96, 73, 86, 7
 19, 48, 71, 13, 52, 96, 73, 86, 7, 99
 ...
 ```

---

## 🧮 Concept Summary

| Concept | Description |
|----------|--------------|
| **In-place sorting** | Sorting without using extra memory |
| **Stable sorting** | Keeps the order of equal elements |
| **Divide and conquer** | Splits the problem into smaller parts (Quick, Merge) |
| **Comparison-based sorting** | Relies on comparing elements |
| **Non-comparison sorting** | Sorts using value properties (Counting, Radix) |

---

## ✍️Authors

## 👨🏽‍💻 Mohammed Abdulrahman Basuliman**  
📍 Riyadh, Saudi Arabia  
🎓 IT Student at Saudi Electronic University  
🎓 Student at Holberton School  
📧 4thkiller2005@gmail.com  
🔗 GitHub: [oDoDyK](https://github.com/oDoDyK)

## 👩🏻‍💻 Nada Ghannam Al-Mutairi**  
📍 Riyadh, Saudi Arabia  
🎓 IS Student at AlMaarefa University  
🎓 Student at Holberton School  
📧 nada1010100@gmail.com  
🔗 GitHub: [NadaGhannam25](https://github.com/NadaGhannam25)

---

## 💡 Motivational Note
```bash
"Mastering Sorting Algorithms & Big O 📊💻 makes your code faster ⚡, smarter 🧠, and prepares you to tackle any challenge! 🔥"
```
