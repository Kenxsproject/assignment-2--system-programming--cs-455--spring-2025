# Spring 2025 System Programming — Assignment 2

* **Do not start this project until you have read these instructions carefully and you understand them. If something is not clear, ask.**

---

## ❖・Before You Begin・❖

1. Log in to GitHub.
2. Fork this repo(sitory). See [this video](http://code-warrior.github.io/tutorials/git/github/forking-and-cloning-at-the-github-web-site/) on how to carry out this step and step `3`.
3. Clone your fork, using either the web site or the GitHub Desktop client.
4. Checkout your personalized branch, the one with your name.

---

## ❖・Instructions・❖

For this assignment, you’ll be writing two programs. For the first, write a program that implements the bubble sort algorithm using function pointers. You’ll need to implement functions `bubbleSort`, `swap`, `ascending`, and `descending`. Function `bubbleSort` receives a pointer to a function as an argument — either function `ascending` or `descending` — in addition to an `int` array and the array’s size. The user chooses whether to sort the array in *ascending* (`1`) or *descending* (`2`) order. If the user enters `1`, main passes a pointer to function `ascending` to function `bubbelSort`. If the user enter `2`, `main` passes a pointer to function `descending` to function `bubbleSort`. Use the following as a test array.

```c
int a[SIZE] = {2, 6, 4, 8, 10, 12, 89, 68, 45, 37};
```

The behavior of your program and its output should [look like this](https://roy.vanegas.org/video/cs-455--assignment-2--program-1.mp4)

---

For the second, you’ll be writing a grade reporting program using the following 2-dimensional array.

```c
int studentGrades[STUDENTS][EXAMS] = {
  {77, 68, 86, 73},
  {96, 87, 89, 78},
  {70, 90, 86, 81}};
}
```

In the 3×4 array above, each row represents a student, and each column a grade for each of the four exams the students took during the semester.

Write a function called `minimum` that finds the lowest grade of any student for the semester.

Write a function called `maximum` that finds the highest grade of any student for the semester.

Write a function called `average` that calculates a particular student’s semester average.

Write a function called `printArray` that display the 2-dimensional array in a neat, tabular format.

Present the user with a menu that looks like the following:

```c
Enter a choice:
  0  Print the array of grades
  1  Find the minimum grade
  2  Find the maximum grade
  3  Print the average on all tests for each student
  4  End program
? 
```

A restriction on using arrays of pointers to functions is that *all* the pointers must have the same type. The pointers *must* be to functions of the same return type that receive arguments of the same type. As a hint, you’ll need to implement the following:

```c
void (*processGrades[4])(int [][EXAMS], size_t, size_t) =
      {printArray, minimum, maximum, average};
```

The behavior of your program and its output should [look like this](https://roy.vanegas.org/video/cs-455--assignment-2--program-2.mp4)

---

## ❖・Grading・❖

| Item                                                                                | Points |
|-------------------------------------------------------------------------------------|:------:|
| `01--print-horizontal-histogram-of-length-of-words-using-function-pointers.c` works | `25`   |
| `02--arrays-of-function-pointers.c` works                                           | `25`   |
| Code is neat, professional, and formatted correctly                                 | `50`   |

---

## ❖・Due・❖

Tuesday, 8 April 2025, at 10:00 PM. **`NO` late assignments will be accepted, unless you can provide documentation of an emergency.**

---

## ❖・Submission・❖

You will need to issue a pull request back into the original repo, the one from which your fork was created for this project. See the **Issuing Pull Requests** section of [this site](http://code-warrior.github.io/tutorials/git/github/index.html) for help on how to submit your assignment.

**Note**: This assignment may *only* be submitted via GitHub. **`NO` other form of submission will be accepted**.
