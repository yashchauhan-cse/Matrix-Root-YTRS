# Matrix-Root-YTRS
A C program to compute square roots of 2*2 real matrices using my own YTRS method

<p align="center">
  <img src="https://raw.githubusercontent.com/yashchauhan-cse/Matrix-Root-YTRS/main/assets/matrix.png" width="200" alt="YTRS Matrix Logo"/>
</p>

<h1 align="center">YTRS Matrix Root Engine</h1>
<p align="center">⚡ A blazing fast, elegant C program to compute square roots of 2×2 real matrices using the YTRS method ⚡</p>

<p align="center">
  <a href="#-features">Features</a> •
  <a href="#-theory-behind">Theory</a> •
  <a href="#-demo--usage">Demo</a> •
  <a href="#-how-to-run">How to Run</a> •
  <a href="#-credits--about">About</a>
</p>

---

## 🔧 Features

- 🚀 Calculates all **real square roots** of any 2×2 real matrix.
- 🧠 Uses the **YTRS Method** — a custom mathematical system derived by Yash.
- 💡 Handles special cases like:
  - Identity Matrix
  - Zero Matrix
  - Scalar Matrices
  - Rotation/Nilpotent Forms
- 🧮 Outputs **2 or 4 real roots**, or states when only complex roots exist.
- 🎯 Accurate up to 2 decimal places.

---

## 🧠 Theory Behind

**YTRS (Yash’s Trace Root System)** is a method that:
- Uses trace `T = a + d`, determinant `D = ad - bc`, and the discriminant `Δ = T² - 4D`.
- Solves a custom quartic equation derived from eigen theory + matrix algebra.
- Breaks down cases for:
  - Scalar roots
  - Infinite roots (I and 0 matrices)
  - Real vs. Complex scenarios
- Root forms derived:
  - From `K = 1 / √(T ± 2√D)`
  - Then expanded to full matrix root using a clever formula.

🧠 _More details will be added in the wiki or PDF later!_

---

## 🧪 Demo & Usage

### 📥 Input

ENTER ANY 2x2 REAL MATRIX: [p q] [r s]

Example:

[2 3] [3 5]

### 📤 Output

4 REAL ROOTS EXIST.

1ST ROOT:               2ND ROOT:
[1.00 1.00]             [-1.00 -1.00]
[1.00 2.00]             [-1.00 -2.00]

3RD ROOT:               4TH ROOT:
[0.45 1.34]             [-0.45 -1.34]
[1.34 1.79]             [-1.34 -1.79]

---

## 🧑‍💻 How to Run

### 🔨 Compile
```bash
gcc YTRS.c -o YTRS.exe

▶️ Run (Windows)

./YTRS.exe

⚙️ Optional: With Icon

To attach a custom .ico file:

1. Create a resource file YTRS.rc with:

id ICON "your-icon.ico"


2. Compile with:

windres YTRS.rc -O coff -o YTRS.res
gcc YTRS.c YTRS.res -o YTRS.exe




---

🔁 Related Projects

Project	Description

Matrix-Toolkit	A matrix calculator handling inverse, power, eigen, CHT, etc.
✅	A future GUI version of YTRS might be in development!



---

👤 Credits & About

> 💡 Created with passion and brain sparks by Yash Chauhan
👨‍💻 Engineering Student • Math Hacker • Code Philosopher
📧 Reach me: coming soon...




---

🌟 Support & Flex 😎

If you liked this or used this in college flex — please consider:

⭐️ Giving a star to this repo
🔁 Sharing with your coder friends
🧠 Mentioning "YTRS" next time someone says matrix roots aren't possible
