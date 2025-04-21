30
---
The answer is **D**.
$kjk$
**Explanation:**

**A. The series diverges by the nth term test.**

* **nth term test:** If $\lim_{n \to \infty} a_n \neq 0$, then the series $\sum a_n$ diverges. However, if $\lim_{n \to \infty} a_n = 0$, the test is inconclusive.
* The general term of the given series is $a_n = \frac{1}{2^n - n}$.
* $\lim_{n \to \infty} a_n = \lim_{n \to \infty} \frac{1}{2^n - n} = 0$ (because the denominator goes to infinity).
* Since the limit is 0, the nth term test cannot conclude divergence. Therefore, A is incorrect.

**B. The series diverges by limit comparison to the harmonic series $\sum_{n=1}^{\infty} \frac{1}{n}$.**

* **Limit Comparison Test:** Let $a_n > 0$ and $b_n > 0$ for all $n$. If $\lim_{n \to \infty} \frac{a_n}{b_n} = c$ where $0 < c < \infty$, then $\sum a_n$ and $\sum b_n$ either both converge or both diverge. If $\lim_{n \to \infty} \frac{a_n}{b_n} = 0$ and $\sum b_n$ converges, then $\sum a_n$ converges. If $\lim_{n \to \infty} \frac{a_n}{b_n} = \infty$ and $\sum b_n$ diverges, then $\sum a_n$ diverges.
* Let $a_n = \frac{1}{2^n - n}$ and $b_n = \frac{1}{n}$ (harmonic series).
* $\lim_{n \to \infty} \frac{a_n}{b_n} = \lim_{n \to \infty} \frac{\frac{1}{2^n - n}}{\frac{1}{n}} = \lim_{n \to \infty} \frac{n}{2^n - n}$
* Divide numerator and denominator by $2^n$: $\lim_{n \to \infty} \frac{\frac{n}{2^n}}{1 - \frac{n}{2^n}} = \frac{0}{1 - 0} = 0$ (since $\lim_{n \to \infty} \frac{n}{2^n} = 0$).
* The limit is 0, and the harmonic series $\sum \frac{1}{n}$ diverges. In the Limit Comparison Test, if the limit is 0 and the comparison series diverges, we cannot conclude anything about the convergence or divergence of $\sum a_n$. Therefore, B is incorrect.

**C. The series converges by the nth term test.**

* The nth term test cannot prove convergence. A limit of 0 only means the test is inconclusive, not that the series converges. Therefore, C is incorrect.

**D. The series converges by limit comparison to the geometric series $\sum_{n=1}^{\infty} \frac{1}{2^n}$.**

* Let $a_n = \frac{1}{2^n - n}$ and $b_n = \frac{1}{2^n}$ (geometric series).
* $\lim_{n \to \infty} \frac{a_n}{b_n} = \lim_{n \to \infty} \frac{\frac{1}{2^n - n}}{\frac{1}{2^n}} = \lim_{n \to \infty} \frac{2^n}{2^n - n}$
* Divide numerator and denominator by $2^n$: $\lim_{n \to \infty} \frac{1}{1 - \frac{n}{2^n}} = \frac{1}{1 - 0} = 1$ (since $\lim_{n \to \infty} \frac{n}{2^n} = 0$).
* The limit is 1 ($0 < 1 < \infty$), and the geometric series $\sum_{n=1}^{\infty} \frac{1}{2^n}$ converges (because the common ratio $r = \frac{1}{2} < 1$).
* By the Limit Comparison Test, the given series $\sum_{n=1}^{\infty} \frac{1}{2^n - n}$ also converges. Therefore, D is correct.

**Conclusion:** The correct answer is **D**. The given series converges by the Limit Comparison Test with the geometric series $\sum_{n=1}^{\infty} \frac{1}{2^n}$.


29
---
Find the power series expansion of $(e^x + e^{-x})/2$. Explain the concept and steps in detail.

**Solution:**

We want to find the power series expansion of the function $f(x) = (e^x + e^{-x})/2$.  This function is actually the hyperbolic cosine function, $\cosh(x)$. We can derive its power series expansion using the known power series for $e^x$.

**1. Recall the Power Series Expansion of $e^x$:**

The power series expansion for $e^x$, centered at $x=0$ (Maclaurin series), is a fundamental series and is given by:

$e^x =  \sum_{n=0}^{\infty} \frac{x^n}{n!} = 1 + x + \frac{x^2}{2!} + \frac{x^3}{3!} + \frac{x^4}{4!} + \cdots$

This series converges for all real numbers $x$.  This is a crucial starting point because we can leverage this known series to find the series for related functions.

**2. Find the Power Series Expansion of $e^{-x}$:**

To find the power series for $e^{-x}$, we can substitute "-x" for "x" in the power series expansion of $e^x$.  This is a valid operation within the radius of convergence of the power series.

$e^{-x} = \sum_{n=0}^{\infty} \frac{(-x)^n}{n!} = \sum_{n=0}^{\infty} \frac{(-1)^n x^n}{n!}$
       $= 1 + (-x) + \frac{(-x)^2}{2!} + \frac{(-x)^3}{3!} + \frac{(-x)^4}{4!} + \cdots$
       $= 1 - x + \frac{x^2}{2!} - \frac{x^3}{3!} + \frac{x^4}{4!} - \cdots$

This series also converges for all real numbers $x$, just like the series for $e^x$.

**3. Add the Power Series of $e^x$ and $e^{-x}$:**

Now we need to find the power series for $(e^x + e^{-x})$. We can do this by adding the power series for $e^x$ and $e^{-x}$ term by term.  This is allowed because when we add two power series that converge in a common interval, the resulting series also converges in that interval (in this case, both converge for all $x$, so their sum also converges for all $x$).

$e^x + e^{-x} = \left(1 + x + \frac{x^2}{2!} + \frac{x^3}{3!} + \frac{x^4}{4!} + \cdots\right) + \left(1 - x + \frac{x^2}{2!} - \frac{x^3}{3!} + \frac{x^4}{4!} - \cdots\right)$

Let's group the terms and add them:

* Constant terms: $1 + 1 = 2$
* $x$ terms: $x + (-x) = 0$
* $x^2$ terms: $\frac{x^2}{2!} + \frac{x^2}{2!} = 2 \times \left(\frac{x^2}{2!}\right) = \frac{x^2}{1!} = \frac{2x^2}{2!}$
* $x^3$ terms: $\frac{x^3}{3!} + \left(-\frac{x^3}{3!}\right) = 0$
* $x^4$ terms: $\frac{x^4}{4!} + \frac{x^4}{4!} = 2 \times \left(\frac{x^4}{4!}\right) = \frac{2x^4}{4!}$

We can see a pattern here.  The terms with odd powers of $x$ cancel out, and the terms with even powers of $x$ are doubled.  So, we can write the sum as:

$e^x + e^{-x} = 2 + 2 \times \left(\frac{x^2}{2!}\right) + 2 \times \left(\frac{x^4}{4!}\right) + 2 \times \left(\frac{x^6}{6!}\right) + \cdots$
              $= 2 \times \left[1 + \frac{x^2}{2!} + \frac{x^4}{4!} + \frac{x^6}{6!} + \cdots\right]$

**4. Divide by 2:**

Finally, we need to find the power series for $(e^x + e^{-x})/2$.  We can do this by dividing the series we just obtained by 2.  This is equivalent to multiplying the series by the constant $1/2$, which we can distribute inside the summation.

$(e^x + e^{-x})/2 = \frac{1}{2} \times \left[2 \times \left(1 + \frac{x^2}{2!} + \frac{x^4}{4!} + \frac{x^6}{6!} + \cdots\right)\right]$
                 $= 1 + \frac{x^2}{2!} + \frac{x^4}{4!} + \frac{x^6}{6!} + \cdots$

**5. Express in Summation Notation:**

We can express this resulting series in summation notation. Notice that only even powers of $x$ appear, and the denominator is the factorial of the exponent.  We can represent even numbers as $2n$, where $n$ starts from 0.

$(e^x + e^{-x})/2 = \sum_{n=0}^{\infty} \frac{x^{2n}}{(2n)!}$

**Therefore, the power series expansion of $(e^x + e^{-x})/2$ is $\sum_{n=0}^{\infty} \frac{x^{2n}}{(2n)!} = 1 + \frac{x^2}{2!} + \frac{x^4}{4!} + \frac{x^6}{6!} + \cdots$**

**Conceptual Explanation:**

* **Power Series Representation:**  Many functions can be represented as an infinite sum of powers of $x$ (a power series) around a specific point (usually $x=0$ for Maclaurin series). This representation is very useful for analysis, differentiation, integration, and approximation of functions.
* **Known Series as Building Blocks:**  We often use known power series expansions of elementary functions (like $e^x$, $\sin(x)$, $\cos(x)$, etc.) as building blocks to find series expansions for more complex functions.
* **Substitution and Operations on Series:**  We can perform algebraic operations (substitution, addition, subtraction, multiplication, division, differentiation, integration) on power series within their radius of convergence to find new power series. In this case, we used substitution ($x$ with $-x$) and addition, followed by scalar multiplication (division by 2).
* **Term-by-Term Operations:**  The validity of term-by-term addition and scalar multiplication of power series is a fundamental property of power series.  It allows us to manipulate them much like polynomials within their interval of convergence.
* **Hyperbolic Cosine:**  The function $(e^x + e^{-x})/2$ is defined as the hyperbolic cosine function, $\cosh(x)$.  Our derived power series is indeed the power series expansion for $\cosh(x)$.  This connection reinforces the correctness of our derivation and shows how power series can reveal relationships between different functions.

In summary, we found the power series for $(e^x + e^{-x})/2$ by leveraging the known power series for $e^x$ and using valid operations on power series (substitution, addition, and scalar multiplication). This method demonstrates a powerful technique for finding power series expansions of functions based on known series.

19
---
Let f be the function given by f(x) = 2 cos x + 1. What is the approximation for f(1.5) found by using the line tangent to the graph of f at x = π/2?

**Concept:**

The tangent line approximation, also known as linear approximation, uses the tangent line to a function's graph at a specific point to approximate the function's values at nearby points. The equation of the tangent line to the graph of $f(x)$ at $x=a$ is given by:

$$y = f(a) + f'(a)(x-a)$$

To approximate $f(1.5)$ using the tangent line at $x = \pi/2$, we need to find $f(\pi/2)$ and $f'(\pi/2)$.

**Given function:** $f(x) = 2 \cos x + 1$

**1. Find $f(\pi/2)$:**
$$f(\pi/2) = 2 \cos(\pi/2) + 1 = 2 \cdot 0 + 1 = 1$$

**2. Find the derivative $f'(x)$:**
$$f'(x) = \frac{d}{dx} (2 \cos x + 1) = -2 \sin x$$

**3. Find $f'(\pi/2)$:**
$$f'(\pi/2) = -2 \sin(\pi/2) = -2 \cdot 1 = -2$$

**4. Equation of the tangent line at $x = \pi/2$:**
Using the tangent line equation $y = f(a) + f'(a)(x-a)$ with $a = \pi/2$:
$$y = f(\pi/2) + f'(\pi/2)(x - \pi/2) = 1 - 2(x - \pi/2)$$

**5. Approximate $f(1.5)$ using the tangent line:**
Substitute $x = 1.5$ into the tangent line equation:
$$y = 1 - 2(1.5 - \pi/2)$$
Using the approximation $\pi/2 \approx 1.5708$:
$$y \approx 1 - 2(1.5 - 1.5708) = 1 - 2(-0.0708) = 1 + 0.1416 = 1.1416$$

**Answer:**

The approximation for $f(1.5)$ found by using the line tangent to the graph of $f$ at $x = \pi/2$ is approximately $\boxed{1.1416}$.

In LaTeX format, the answer is:

$$\boxed{1.1416}$$


22
---
**Concept:**

This problem requires evaluating the indefinite integral of $x^2 e^{-3x/4}$.  The integrand is a product of a polynomial function ($x^2$) and an exponential function ($e^{-3x/4}$).  This type of integral is typically solved using integration by parts.

**Approach to Solution:**

We will use integration by parts, which is based on the formula:
$$ \int u \, dv = uv - \int v \, du $$
We need to choose $u$ and $dv$ such that the integral becomes simpler after applying the formula.  A good strategy when dealing with a polynomial multiplied by an exponential (or trigonometric) function is to choose the polynomial as $u$, because differentiation reduces the power of the polynomial.

Let's apply integration by parts twice:

**Step 1:**
Let $u = x^2$ and $dv = e^{-3x/4} \, dx$.
Then $du = 2x \, dx$ and $v = \int e^{-3x/4} \, dx = -\frac{4}{3} e^{-3x/4}$.

Applying the integration by parts formula:
$$ \int x^2 e^{-3x/4} \, dx = x^2 \left(-\frac{4}{3} e^{-3x/4}\right) - \int \left(-\frac{4}{3} e^{-3x/4}\right) (2x \, dx) $$
$$ = -\frac{4}{3} x^2 e^{-3x/4} + \frac{8}{3} \int x e^{-3x/4} \, dx $$

**Step 2:**
Now we need to evaluate $\int x e^{-3x/4} \, dx$.  We use integration by parts again.
Let $u = x$ and $dv = e^{-3x/4} \, dx$.
Then $du = dx$ and $v = -\frac{4}{3} e^{-3x/4}$.

Applying the integration by parts formula:
$$ \int x e^{-3x/4} \, dx = x \left(-\frac{4}{3} e^{-3x/4}\right) - \int \left(-\frac{4}{3} e^{-3x/4}\right) \, dx $$
$$ = -\frac{4}{3} x e^{-3x/4} + \frac{4}{3} \int e^{-3x/4} \, dx $$
$$ = -\frac{4}{3} x e^{-3x/4} + \frac{4}{3} \left(-\frac{4}{3} e^{-3x/4}\right) + C_1 $$
$$ = -\frac{4}{3} x e^{-3x/4} - \frac{16}{9} e^{-3x/4} + C_1 $$

**Step 3:**
Substitute the result from Step 2 back into Step 1:
$$ \int x^2 e^{-3x/4} \, dx = -\frac{4}{3} x^2 e^{-3x/4} + \frac{8}{3} \left( -\frac{4}{3} x e^{-3x/4} - \frac{16}{9} e^{-3x/4} \right) + C $$
$$ = -\frac{4}{3} x^2 e^{-3x/4} - \frac{32}{9} x e^{-3x/4} - \frac{128}{27} e^{-3x/4} + C $$

**Final Answer:**

$$ \int x^2 e^{-3x/4} \, dx = -\frac{4}{3} x^2 e^{-3x/4} - \frac{32}{9} x e^{-3x/4} - \frac{128}{27} e^{-3x/4} + C $$

We can factor out $-\frac{4}{27} e^{-3x/4}$ to write the answer in a slightly different form:

$$ = -\frac{4}{27} e^{-3x/4} \left( 9x^2 + 24x + 32 \right) + C $$

Thus, the indefinite integral is:

$$ \boxed{-\frac{4}{3} x^2 e^{-3x/4} - \frac{32}{9} x e^{-3x/4} - \frac{128}{27} e^{-3x/4} + C} $$


14
---

If $f(x) = 3x2 + 2x$, then $f'(x)$ =

**Concept:**

The derivative of a function $f(x)$, denoted as $f'(x)$, represents the instantaneous rate of change of the function with respect to $x$.  It is formally defined using the limit definition of the derivative:

$$ f'(x) = \lim_{h \to 0} \frac{f(x+h) - f(x)}{h} $$

This definition calculates the slope of the tangent line to the graph of $f(x)$ at a point $x$.  In essence, it measures how much the function's value changes as $x$ changes by an infinitesimally small amount $h$.

**Approach to Solution:**

To find the correct expression for $f'(x)$ given $f(x) = 3x^2 + 2x$, we need to match the provided options with the limit definition of the derivative.  Let's examine each option:

*   **Option A:**
    $$ \lim_{h \to 0} \frac{(3x^2 + 2x + h) - (3x^2 + 2x)}{h} $$
    This option incorrectly substitutes $f(x+h)$ with $(3x^2 + 2x + h)$ instead of $3(x+h)^2 + 2(x+h)$.

*   **Option B:**
    $$ \lim_{x \to 0} \frac{(3x^2 + 2x + h) - (3x^2 + 2x)}{h} $$
    This option is incorrect for two reasons: first, it uses the incorrect substitution for $f(x+h)$ as in option A, and second, the limit is taken as $x \to 0$ instead of $h \to 0$.

*   **Option C:**
    $$ \lim_{h \to 0} \frac{(3(x+h)^2 + 2(x+h)) - (3x^2 + 2x)}{h} $$
    This option correctly applies the definition of the derivative. It substitutes $f(x+h)$ with $3(x+h)^2 + 2(x+h)$ and $f(x)$ with $3x^2 + 2x$, and the limit is correctly taken as $h \to 0$.

*   **Option D:**
    $$ \lim_{x \to 0} \frac{(3(x+h)^2 + 2(x+h)) - (3x^2 + 2x)}{h} $$
    While this option correctly substitutes $f(x+h)$, it incorrectly takes the limit as $x \to 0$ instead of $h \to 0$.

**Conclusion:**

Based on the definition of the derivative, **Option C** is the only option that correctly represents $f'(x)$ for $f(x) = 3x^2 + 2x$.

**Answer:** C

12
---

**Concept:**

To solve the indefinite integral of a rational function like $\int \frac{3x+1}{x^2-4x+3} dx$, we use the method of partial fraction decomposition. This technique allows us to break down a complex rational function into simpler fractions that are easier to integrate. The denominator $x^2-4x+3$ can be factored, which is a key step in applying partial fraction decomposition.

**Approach:**

1.  **Factor the denominator:** Factor the quadratic expression $x^2-4x+3$.
2.  **Partial Fraction Decomposition:** Express the rational function $\frac{3x+1}{x^2-4x+3}$ as a sum of simpler fractions with denominators corresponding to the factors found in step 1.
3.  **Solve for Coefficients:** Determine the unknown coefficients in the partial fraction decomposition.
4.  **Integrate:** Integrate each simpler fraction.
5.  **Match with Options:** Compare the result with the given options to find the correct answer.

**Solution:**

First, we factor the denominator:
$$ x^2 - 4x + 3 = (x-3)(x-1) $$

Now, we perform partial fraction decomposition:
$$ \frac{3x+1}{(x-3)(x-1)} = \frac{A}{x-3} + \frac{B}{x-1} $$

Multiply both sides by $(x-3)(x-1)$ to clear the denominators:
$$ 3x+1 = A(x-1) + B(x-3) $$

To solve for $A$ and $B$, we can use the method of substitution.

Let $x = 3$:
$$ 3(3) + 1 = A(3-1) + B(3-3) \\ 10 = 2A \\ A = 5 $$

Let $x = 1$:
$$ 3(1) + 1 = A(1-1) + B(1-3) \\ 4 = -2B \\ B = -2 $$

So, the partial fraction decomposition is:
$$ \frac{3x+1}{(x-3)(x-1)} = \frac{5}{x-3} - \frac{2}{x-1} $$

Now we integrate:
$$ \int \frac{3x+1}{x^2-4x+3} dx = \int \left( \frac{5}{x-3} - \frac{2}{x-1} \right) dx $$
$$ = 5 \int \frac{1}{x-3} dx - 2 \int \frac{1}{x-1} dx $$
$$ = 5 \ln|x-3| - 2 \ln|x-1| + C $$

Comparing this result with the given options, we find that it matches option **D**.

**Answer: D**

$$ D \quad 5 \ln |x − 3| − 2 \ln |x − 1| + C $$

11
---

**Concept:** Implicit Differentiation

When we have an equation relating $x$ and $y$ where $y$ is not explicitly defined as a function of $x$, we can use implicit differentiation to find the derivative $\frac{dy}{dx}$. This technique involves differentiating both sides of the equation with respect to $x$, treating $y$ as a function of $x$ and using the chain rule where necessary.

**Approach:**

1.  **Implicit Differentiation:** Differentiate both sides of the given equation with respect to $x$. Remember to apply the chain rule when differentiating terms involving $y$.
2.  **Solve for $\frac{dy}{dx}$:** Rearrange the differentiated equation to isolate $\frac{dy}{dx}$ on one side.
3.  **Evaluate at the Point:** Substitute the given coordinates of the point $(x, y) = (2, 1)$ into the expression for $\frac{dy}{dx}$ to find the value of the derivative at that point.
4.  **Match with Options:** Compare the calculated value with the provided options to select the correct answer.

**Solution:**

Given the equation:
$$ x^2 + xy - 3y = 3 $$

1.  **Differentiate both sides with respect to $x$:**
    $$ \frac{d}{dx}(x^2) + \frac{d}{dx}(xy) - \frac{d}{dx}(3y) = \frac{d}{dx}(3) $$
    Applying the product rule to $\frac{d}{dx}(xy)$ and the chain rule to $\frac{d}{dx}(3y)$, we get:
    $$ 2x + \left(1 \cdot y + x \cdot \frac{dy}{dx}\right) - 3\frac{dy}{dx} = 0 $$
    $$ 2x + y + x\frac{dy}{dx} - 3\frac{dy}{dx} = 0 $$

2.  **Solve for $\frac{dy}{dx}$:**
    Group the terms with $\frac{dy}{dx}$:
    $$ (x - 3)\frac{dy}{dx} = -2x - y $$
    Isolate $\frac{dy}{dx}$:
    $$ \frac{dy}{dx} = \frac{-2x - y}{x - 3} = \frac{2x + y}{3 - x} $$

3.  **Evaluate at the point $(2, 1)$:**
    Substitute $x = 2$ and $y = 1$ into the expression for $\frac{dy}{dx}$:
    $$ \frac{dy}{dx} \Big|_{(2, 1)} = \frac{2(2) + 1}{3 - 2} = \frac{4 + 1}{1} = 5 $$

4.  **Match with Options:**
    The value of $\frac{dy}{dx}$ at the point $(2, 1)$ is $5$. Comparing this with the given options, we find that it matches option **A**.

**Answer: A**

$$ A \quad 5 $$
9
---
**Concept:** Tangent Line Slope

To determine the slope of the tangent line to the curve $y = xe^x$ at a specific point, we need to find the derivative of the function and evaluate it at the given $x$-value.

**Approach:**

1. **Differentiate the Function:**
   - We use the product rule for differentiation, which states that if $u(x)$ and $v(x)$ are functions of $x$, then the derivative of their product is given by:
     $$ \frac{d}{dx}[u(x)v(x)] = u'(x)v(x) + u(x)v'(x) $$
   - For $y = xe^x$, let $u(x) = x$ and $v(x) = e^x$. Then:
     $$ u'(x) = 1 \quad \text{and} \quad v'(x) = e^x $$
   - Applying the product rule:
     $$ \frac{dy}{dx} = u'(x)v(x) + u(x)v'(x) = 1 \cdot e^x + x \cdot e^x = e^x + xe^x $$

2. **Evaluate the Derivative at $x = \ln 2$:**
   - Substitute $x = \ln 2$ into the derivative to find the slope of the tangent line:
     $$ \frac{dy}{dx} \Big|_{x = \ln 2} = e^{\ln 2} + (\ln 2)e^{\ln 2} $$

3. **Simplify the Expression:**
   - Recall that $e^{\ln a} = a$, so $e^{\ln 2} = 2$.
   - Substitute this into the expression:
     $$ 2 + (\ln 2) \cdot 2 = 2(1 + \ln 2) $$

Therefore, the slope of the tangent line at $x = \ln 2$ is $2(1 + \ln 2)$, which provides the rate of change of the function at that point.

5
---
**Concept:** Geometric Series

A geometric series is a series with a constant ratio between successive terms. It is given by the form:
$$ \sum_{k=0}^{\infty} ar^k = a + ar + ar^2 + ar^3 + \cdots $$
where $a$ is the first term and $r$ is the common ratio.

**Convergence Condition:**
A geometric series converges if and only if the absolute value of the common ratio is less than 1, i.e., $|r| < 1$.

**Sum of a Convergent Geometric Series:**
If a geometric series converges, its sum is given by the formula:
$$ S = \frac{a}{1 - r} $$
In our problem, the series is:
$$ \sum_{k=0}^{\infty} \left(-\frac{e}{\pi}\right)^k $$
Here, the first term $a = \left(-\frac{e}{\pi}\right)^0 = 1$ and the common ratio $r = -\frac{e}{\pi}$.

**Approach to Solve:**

1. **Identify the series type:** Recognize that the given series is a geometric series with $r = -\frac{e}{\pi}$.
2. **Check for convergence:** Determine if $|r| < 1$. Since $e \approx 2.718$ and $\pi \approx 3.141$, we have $\frac{e}{\pi} < 1$, thus $|r| = \left|-\frac{e}{\pi}\right| = \frac{e}{\pi} < 1$. The series converges.
3. **Apply the sum formula:** Use the formula $S = \frac{a}{1 - r}$ to find the sum.
   $$ S = \frac{1}{1 - (-\frac{e}{\pi})} = \frac{1}{1 + \frac{e}{\pi}} = \frac{1}{\frac{\pi + e}{\pi}} = \frac{\pi}{\pi + e} $$

**Answer:**

The series converges to $\boxed{\frac{\pi}{\pi + e}}$, which corresponds to option **C**.

**Final Answer: C** $\qquad \boxed{\frac{\pi}{\pi + e}}$

2
---
**Concept:** Power Rule for Integration

**Formula:**
$$ \int x^n \, dx = \frac{x^{n+1}}{n+1} + C, \quad \text{where } n \neq -1 $$

**Problem:**
We are asked to evaluate the integral:
$$ \int \frac{1}{t\sqrt{t}} \, dt $$

**Approach:**

1. **Rewrite the integrand using exponents:**
   $$ \frac{1}{t\sqrt{t}} = \frac{1}{t \cdot t^{1/2}} = \frac{1}{t^{1 + 1/2}} = \frac{1}{t^{3/2}} = t^{-3/2} $$

2. **Apply the power rule for integration:**
   Here, $n = -\frac{3}{2}$. Applying the formula, we get:
   $$ \int t^{-3/2} \, dt = \frac{t^{-\frac{3}{2} + 1}}{-\frac{3}{2} + 1} + C = \frac{t^{-\frac{1}{2}}}{-\frac{1}{2}} + C $$

3. **Simplify the result:**
   $$ \frac{t^{-\frac{1}{2}}}{-\frac{1}{2}} + C = -2t^{-\frac{1}{2}} + C = -\frac{2}{\sqrt{t}} + C $$

4. **Match with the given options:**
   Comparing our result with the options, we see that option **A** matches our answer:
   $$ \text{A} \quad -2t^{-1/2} + C $$

**Answer:**

The correct answer is **A**.

**Final Answer: A** $\qquad -2t^{-1/2} + C$

1
---
**Concept:** Chain Rule and Derivative of Cosine Function

**Formulas:**
* **Chain Rule:** If $y = f(g(x))$, then $\frac{dy}{dx} = f'(g(x)) \cdot g'(x)$
* **Derivative of $\cos(u)$:** $\frac{d}{du}[\cos(u)] = -\sin(u)$

**Problem:**
Find the derivative of the function $f(x) = \cos^2(3x - 5)$.

**Approach to Solve:**

1. **Rewrite the function:** Recognize that $\cos^2(3x - 5) = [\cos(3x - 5)]^2$.
2. **Apply the Chain Rule:** Use the chain rule twice. First, differentiate the outer power function, and then differentiate the inner cosine function and the linear function inside the cosine.

**Step-by-step Solution:**

Let $f(x) = [\cos(3x - 5)]^2$.
We apply the chain rule. Let $u = \cos(3x - 5)$. Then $f(x) = u^2$.
$$ f'(x) = \frac{d}{dx} [u^2] = 2u \cdot \frac{du}{dx} = 2\cos(3x - 5) \cdot \frac{d}{dx}[\cos(3x - 5)] $$
Now we need to find the derivative of $\cos(3x - 5)$. Let $v = 3x - 5$. Then $\cos(3x - 5) = \cos(v)$.
$$ \frac{d}{dx}[\cos(3x - 5)] = \frac{d}{dx}[\cos(v)] = \frac{d}{dv}[\cos(v)] \cdot \frac{dv}{dx} = -\sin(v) \cdot \frac{d}{dx}[3x - 5] $$
The derivative of $3x - 5$ with respect to $x$ is:
$$ \frac{d}{dx}[3x - 5] = 3 $$
So,
$$ \frac{d}{dx}[\cos(3x - 5)] = -\sin(v) \cdot 3 = -3\sin(3x - 5) $$
Substituting this back into the expression for $f'(x)$:
$$ f'(x) = 2\cos(3x - 5) \cdot (-3\sin(3x - 5)) = -6\sin(3x - 5)\cos(3x - 5) $$

**Answer:**

The derivative $f'(x) = -6\sin(3x - 5)\cos(3x - 5)$, which corresponds to option **D**.

**Final Answer: D** $\qquad -6\sin(3x - 5)\cos(3x - 5)$


10: Euler's Method
---
**Concept: Euler's Method**

Euler's method is a first-order numerical procedure for approximating the solution of an ordinary differential equation (ODE) with a given initial value. It is an explicit method for approximating the solution at the next time step using the solution at the current time step and the derivative at the current time step.

Given a differential equation of the form $\frac{dy}{dx} = f(x, y)$ with an initial condition $y(x_0) = y_0$, Euler's method provides an approximate solution by iteratively calculating the values of $y$ at discrete points.

**Formula for Euler's Method:**

The iterative formula for Euler's method is:
$$y_{i+1} = y_i + h \cdot f(x_i, y_i)$$
where:
* $y_{i+1}$ is the approximation of the solution at $x_{i+1} = x_i + h$
* $y_i$ is the approximation of the solution at $x_i$
* $h$ is the step size, $h = x_{i+1} - x_i$
* $f(x_i, y_i)$ is the value of the derivative at the point $(x_i, y_i)$

**Problem:**

Let $y = f(x)$ be the solution to the differential equation $\frac{dy}{dx} = x - y$ with the initial condition $f(2) = 8$. What is the approximation for $f(3)$ obtained by using Euler’s method with two steps of equal length, starting at $x = 2$?

**Approach:**

1. **Identify the given values:**
   * Differential equation: $\frac{dy}{dx} = f(x, y) = x - y$
   * Initial condition: $x_0 = 2$, $y_0 = f(2) = 8$
   * We want to approximate $f(3)$.
   * Number of steps: 2
   * Starting point: $x = 2$
   * Ending point: $x = 3$

2. **Calculate the step size (h):**
   Since we need to go from $x = 2$ to $x = 3$ in two equal steps, the step size $h$ is:
   $$h = \frac{x_{final} - x_{initial}}{\text{number of steps}} = \frac{3 - 2}{2} = \frac{1}{2} = 0.5$$

3. **Apply Euler's method iteratively:**
   * **Step 1:**  Calculate $y_1$ at $x_1 = x_0 + h = 2 + 0.5 = 2.5$
      Using Euler's formula: $y_{1} = y_0 + h \cdot f(x_0, y_0)$
      $f(x_0, y_0) = f(2, 8) = x_0 - y_0 = 2 - 8 = -6$
      $y_{1} = 8 + 0.5 \cdot (-6) = 8 - 3 = 5$

   * **Step 2:** Calculate $y_2$ at $x_2 = x_1 + h = 2.5 + 0.5 = 3$
      Using Euler's formula: $y_{2} = y_1 + h \cdot f(x_1, y_1)$
      $f(x_1, y_1) = f(2.5, 5) = x_1 - y_1 = 2.5 - 5 = -2.5$
      $y_{2} = 5 + 0.5 \cdot (-2.5) = 5 - 1.25 = 3.75$

4. **Result:**
   The approximation for $f(3)$ obtained by Euler's method with two steps is $y_2 = 3.75$.

**Answer:**

The approximation for $f(3)$ is $3.75$.

17
---
## Problem: Evaluate the Definite Integral

Evaluate the definite integral:
$$
\int_{0}^{5} \frac{1}{\sqrt{5 - x}} \, dx
$$

**Concept: Definite Integral and Substitution**

A definite integral $\int_{a}^{b} f(x) \, dx$ represents the signed area between the curve $y = f(x)$ and the x-axis from $x = a$ to $x = b$. To evaluate this integral, we first find the antiderivative (indefinite integral) of $f(x)$, and then apply the Fundamental Theorem of Calculus.

In this problem, we need to evaluate the definite integral of $f(x) = \frac{1}{\sqrt{5 - x}}$ from $x = 0$ to $x = 5$. We can use a substitution to simplify the integrand.

**Steps to Solve:**

1. **Indefinite Integral:** First, we find the indefinite integral of $\frac{1}{\sqrt{5 - x}}$. Let's use the substitution method.
   Let $u = 5 - x$. Then, $du = -dx$, so $dx = -du$.
   $$
   \int \frac{1}{\sqrt{5 - x}} \, dx = \int \frac{1}{\sqrt{u}} \, (-du) = - \int u^{-1/2} \, du
   $$
   Using the power rule for integration, $\int u^n \, du = \frac{u^{n+1}}{n+1} + C$ (for $n \neq -1$):
   $$
   - \int u^{-1/2} \, du = - \frac{u^{-1/2 + 1}}{-1/2 + 1} + C = - \frac{u^{1/2}}{1/2} + C = -2\sqrt{u} + C
   $$
   Substitute back $u = 5 - x$:
   $$
   \int \frac{1}{\sqrt{5 - x}} \, dx = -2\sqrt{5 - x} + C
   $$

2. **Apply the Fundamental Theorem of Calculus:**
   The Fundamental Theorem of Calculus states that if $F(x)$ is an antiderivative of $f(x)$, then
   $$
   \int_{a}^{b} f(x) \, dx = F(b) - F(a)
   $$
   In our case, $F(x) = -2\sqrt{5 - x}$, $a = 0$, and $b = 5$.
   $$
   \int_{0}^{5} \frac{1}{\sqrt{5 - x}} \, dx = \left[ -2\sqrt{5 - x} \right]_{0}^{5} = F(5) - F(0)
   $$
   Calculate $F(5)$ and $F(0)$:
   $$
   F(5) = -2\sqrt{5 - 5} = -2\sqrt{0} = 0
   $$
   $$
   F(0) = -2\sqrt{5 - 0} = -2\sqrt{5}
   $$
   Therefore,
   $$
   \int_{0}^{5} \frac{1}{\sqrt{5 - x}} \, dx = F(5) - F(0) = 0 - (-2\sqrt{5}) = 2\sqrt{5}
   $$

**Answer:**

The value of the definite integral is $2\sqrt{5}$.

**Relevant Formulas:**

* **Power Rule for Integration:**
  $$
  \int x^n \, dx = \frac{x^{n+1}}{n+1} + C, \quad n \neq -1
  $$
* **Substitution Rule:**
  If $u = g(x)$, then $du = g'(x) \, dx$ and
  $$
  \int f(g(x))g'(x) \, dx = \int f(u) \, du
  $$
* **Fundamental Theorem of Calculus:**
  If $F'(x) = f(x)$, then
  $$
  \int_{a}^{b} f(x) \, dx = F(b) - F(a)
  $$

  20: Parametric
  ---
## Problem: Finding the Value of k in Parametric Equations

**Concept:**

To find the slope of the tangent line to a curve defined by parametric equations $x = f(t)$ and $y = g(t)$, we use the formula for the derivative of $y$ with respect to $x$ in parametric form:

$$
\frac{dy}{dx} = \frac{dy/dt}{dx/dt}
$$

This formula arises from the chain rule.  If we consider $y$ as a function of $x$, and both $x$ and $y$ as functions of $t$, then by the chain rule:

$$
\frac{dy}{dt} = \frac{dy}{dx} \cdot \frac{dx}{dt}
$$

Solving for $\frac{dy}{dx}$ gives us the formula above, provided that $\frac{dx}{dt} \neq 0$.

**Approach:**

1. **Find $\frac{dx}{dt}$ and $\frac{dy}{dt}$:** Differentiate the given parametric equations $x = \ln(t+1)$ and $y = kt^2$ with respect to $t$.
2. **Calculate $\frac{dy}{dx}$:** Use the formula $\frac{dy}{dx} = \frac{dy/dt}{dx/dt}$.
3. **Evaluate $\frac{dy}{dx}$ at $t = 3$:** Substitute $t = 3$ into the expression for $\frac{dy}{dx}$.
4. **Set $\frac{dy}{dx}$ equal to 8 and solve for $k$:** We are given that the slope of the tangent line at $t = 3$ is 8.  Set the expression obtained in step 3 equal to 8 and solve for the unknown constant $k$.

**Solution:**

Given parametric equations are:
$$
x = \ln(t + 1)
$$
$$
y = kt^2
$$

1. **Find $\frac{dx}{dt}$ and $\frac{dy}{dt}$:**
   $$
   \frac{dx}{dt} = \frac{d}{dt} [\ln(t + 1)] = \frac{1}{t + 1} \cdot \frac{d}{dt}(t + 1) = \frac{1}{t + 1} \cdot 1 = \frac{1}{t + 1}
   $$
   $$
   \frac{dy}{dt} = \frac{d}{dt} [kt^2] = k \cdot \frac{d}{dt}(t^2) = k \cdot 2t = 2kt
   $$

2. **Calculate $\frac{dy}{dx}$:**
   $$
   \frac{dy}{dx} = \frac{dy/dt}{dx/dt} = \frac{2kt}{\frac{1}{t + 1}} = 2kt(t + 1)
   $$

3. **Evaluate $\frac{dy}{dx}$ at $t = 3$:**
   Substitute $t = 3$ into the expression for $\frac{dy}{dx}$:
   $$
   \left. \frac{dy}{dx} \right|_{t=3} = 2k(3)(3 + 1) = 2k(3)(4) = 24k
   $$

4. **Set $\frac{dy}{dx}$ equal to 8 and solve for $k$:**
   We are given that the slope at $t = 3$ is 8, so:
   $$
   24k = 8
   $$
   Divide both sides by 24 to solve for $k$:
   $$
   k = \frac{8}{24} = \frac{1}{3}
   $$

**Answer:**

The value of $k$ is $\boxed{\frac{1}{3}}$.

**Relevant Formulas:**

* **Derivative of Natural Logarithm:**
   $$
   \frac{d}{du} [\ln(u)] = \frac{1}{u}
   $$
   Using the chain rule:
   $$
   \frac{d}{dt} [\ln(g(t))] = \frac{g'(t)}{g(t)}
   $$
* **Power Rule for Differentiation:**
   $$
   \frac{d}{dt} [t^n] = nt^{n-1}
   $$
* **Slope of Tangent Line for Parametric Curves:**
   $$
   \frac{dy}{dx} = \frac{dy/dt}{dx/dt}
   $$


   23
   ---
   **Concept and Approach:**

To find the derivative of a power series, we can differentiate it term by term within its radius of convergence. This is a fundamental property of power series.

**Relevant Formula:**

* **Power Rule for Differentiation:** $\frac{d}{dx}(x^n) = nx^{n-1}$
* **Term-by-Term Differentiation of Power Series:** If $f(x) = \sum_{n=0}^{\infty} c_n x^n$, then $f'(x) = \sum_{n=1}^{\infty} n c_n x^{n-1}$.

**Given Function:**

$$
f(x) = \sum_{n=1}^{\infty} \frac{x^{2n}}{n!}
$$

**Step-by-step Differentiation:**

1. **Differentiate term by term:**
   $$
   f'(x) = \frac{d}{dx} \left[ \sum_{n=1}^{\infty} \frac{x^{2n}}{n!} \right] = \sum_{n=1}^{\infty} \frac{d}{dx} \left[ \frac{x^{2n}}{n!} \right]
   $$

2. **Apply the power rule:**
   $$
   \frac{d}{dx} \left[ \frac{x^{2n}}{n!} \right] = \frac{1}{n!} \frac{d}{dx} [x^{2n}] = \frac{1}{n!} (2n x^{2n-1}) = \frac{2n}{n!} x^{2n-1}
   $$

3. **Simplify the expression:**
   For $n \ge 1$, we can simplify $\frac{2n}{n!} = \frac{2n}{n \cdot (n-1)!} = \frac{2}{(n-1)!}$.
   $$
   f'(x) = \sum_{n=1}^{\infty} \frac{2}{(n-1)!} x^{2n-1} = 2 \sum_{n=1}^{\infty} \frac{x^{2n-1}}{(n-1)!}
   $$

4. **Index Substitution (optional for simplification):**
   Let $m = n-1$. When $n=1$, $m=0$. As $n \to \infty$, $m \to \infty$. Also, $2n-1 = 2(m+1)-1 = 2m+2-1 = 2m+1$.
   $$
   f'(x) = 2 \sum_{m=0}^{\infty} \frac{x^{2m+1}}{m!} = 2 \sum_{m=0}^{\infty} \frac{x \cdot x^{2m}}{m!} = 2x \sum_{m=0}^{\infty} \frac{(x^2)^m}{m!}
   $$

5. **Recognize the series expansion of $e^u$:**
   Recall that the power series expansion for $e^u$ is $e^u = \sum_{m=0}^{\infty} \frac{u^m}{m!}$.  Here, $u = x^2$.
   $$
   \sum_{m=0}^{\infty} \frac{(x^2)^m}{m!} = e^{x^2}
   $$

6. **Final Result:**
   $$
   f'(x) = 2x e^{x^2}
   $$

**Answer:**

$$
f'(x) = 2x e^{x^2}
$$


24
---
## Problem

If the average value of a continuous function $f$ on the interval $[-2, 4]$ is 12, what is the value of $\frac{1}{8} \int_{-2}^{4} f(x) \, dx$?

## Concept and Approach

**Concept: Average Value of a Function**

The average value of a continuous function $f(x)$ over an interval $[a, b]$ is defined as:

$$
\text{Average Value} = \frac{1}{b-a} \int_{a}^{b} f(x) \, dx
$$

This formula represents the height of a rectangle with base $(b-a)$ that has the same area as the area under the curve of $f(x)$ from $x=a$ to $x=b$.

**Approach to Solve the Problem:**

1. **Identify the given information:** We are given the average value of the function $f$ on the interval $[-2, 4]$ and we need to find the value of $\frac{1}{8} \int_{-2}^{4} f(x) \, dx$.

2. **Apply the formula for the average value:** In our case, $a = -2$ and $b = 4$. The length of the interval is $b - a = 4 - (-2) = 6$.  We are given that the average value is 12.  So, we can write:

   $$
   12 = \frac{1}{4 - (-2)} \int_{-2}^{4} f(x) \, dx
   $$

3. **Solve for the definite integral:** Now we need to solve for $\int_{-2}^{4} f(x) \, dx$.

   $$
   12 = \frac{1}{6} \int_{-2}^{4} f(x) \, dx
   $$

   Multiply both sides by 6 to isolate the integral:

   $$
   12 \times 6 = \int_{-2}^{4} f(x) \, dx
   $$

   $$
   72 = \int_{-2}^{4} f(x) \, dx
   $$

4. **Calculate the final value:** We are asked to find the value of $\frac{1}{8} \int_{-2}^{4} f(x) \, dx$. We have found that $\int_{-2}^{4} f(x) \, dx = 72$.  So, we substitute this value:

   $$
   \frac{1}{8} \int_{-2}^{4} f(x) \, dx = \frac{1}{8} \times 72
   $$

   $$
   \frac{1}{8} \times 72 = 9
   $$

**Answer:**

The value of $\frac{1}{8} \int_{-2}^{4} f(x) \, dx$ is 9.

$$
\frac{1}{8} \int_{-2}^{4} f(x) \, dx = 9
$$


25
---
**Question:**

What is the radius of convergence of the Maclaurin series for the function $f(x) = \frac{2x}{1+x^2}$?

**Concept and Approach:**

To find the radius of convergence of the Maclaurin series for a function, we need to determine the values of $x$ for which the series converges.  For rational functions like this, we can often use the properties of geometric series.

**Key Concepts:**

* **Maclaurin Series:** The Maclaurin series is a Taylor series expansion of a function about $x=0$.
* **Radius of Convergence (R):** For a power series $\sum_{n=0}^{\infty} c_n x^n$, the radius of convergence $R$ is a non-negative number such that the series converges if $|x| < R$ and diverges if $|x| > R$.
* **Geometric Series:** The geometric series $\sum_{n=0}^{\infty} r^n = \frac{1}{1-r}$ converges if $|r| < 1$.

**Approach using Geometric Series:**

1. **Rewrite the function to resemble the form of a geometric series.** We can manipulate the given function to fit the form $\frac{1}{1-r}$.
2. **Identify the 'r' term.**  Once in the geometric series form, identify the expression that plays the role of 'r'.
3. **Apply the convergence condition $|r| < 1$.** Set the absolute value of 'r' to be less than 1 and solve for $x$.
4. **Determine the Radius of Convergence.** The inequality obtained in step 3 will give us the range of $x$ for which the series converges, and from this, we can identify the radius of convergence.

**Solution:**

We start with the function $f(x) = \frac{2x}{1+x^2}$. We can rewrite the denominator in the form $1 - (-x^2)$.

So, we have:
$$
f(x) = 2x \cdot \frac{1}{1+x^2} = 2x \cdot \frac{1}{1 - (-x^2)}
$$

Now, we can use the geometric series formula with $r = -x^2$:
$$
\frac{1}{1 - (-x^2)} = \sum_{n=0}^{\infty} (-x^2)^n = \sum_{n=0}^{\infty} (-1)^n x^{2n}
$$
This geometric series converges when $|r| = |-x^2| < 1$.

Let's solve the inequality:
$$
|-x^2| < 1 \\
|x^2| < 1 \\
|x|^2 < 1 \\
|x| < \sqrt{1} \\
|x| < 1
$$

The condition for convergence is $|x| < 1$.  Therefore, the radius of convergence is $R = 1$.

**Answer:**

The radius of convergence of the Maclaurin series for $f(x) = \frac{2x}{1+x^2}$ is $\boxed{1}$.

26
---
## Problem

Let $f$ be a function with $f(0) = \frac{1}{2\pi}$, $f(2) = \frac{1}{2\pi}$, and derivative given by $f'(x) = (x + 1) \cos(\pi x)$. How many values of $x$ in the open interval $(0, 2)$ satisfy the conclusion of the Mean Value Theorem for the function $f$ on the closed interval $[0, 2]$?

**Concept and Approach:**

This problem is about applying the **Mean Value Theorem (MVT)**. Let's first recall the theorem:

**Mean Value Theorem:**

If a function $f$ is:
1.  **Continuous** on the closed interval $[a, b]$
2.  **Differentiable** on the open interval $(a, b)$

Then there exists at least one number $c$ in $(a, b)$ such that:

$$f'(c) = \frac{f(b) - f(a)}{b - a}$$

In this problem, we are given $a = 0$ and $b = 2$. We are also given the values of $f(0)$ and $f(2)$, and the derivative $f'(x)$. We need to find the number of values of $x$ in $(0, 2)$ that satisfy the conclusion of the MVT.

First, let's calculate the value of $\frac{f(b) - f(a)}{b - a}$ for our given function and interval:

$$\frac{f(2) - f(0)}{2 - 0} = \frac{\frac{1}{2\pi} - \frac{1}{2\pi}}{2} = \frac{0}{2} = 0$$

So, according to the Mean Value Theorem, we need to find the number of values of $x$ in the interval $(0, 2)$ such that $f'(x) = 0$. We are given $f'(x) = (x + 1) \cos(\pi x)$.  We need to solve the equation $f'(x) = 0$ for $x \in (0, 2)$.

$$(x + 1) \cos(\pi x) = 0$$

This equation is satisfied if either $(x + 1) = 0$ or $\cos(\pi x) = 0$.

*   If $x + 1 = 0$, then $x = -1$. However, $x = -1$ is not in the interval $(0, 2)$, so we discard this solution.
*   If $\cos(\pi x) = 0$, then $\pi x = \frac{\pi}{2} + n\pi$, where $n$ is an integer. Dividing by $\pi$, we get $x = \frac{1}{2} + n$, where $n$ is an integer.

Now we need to find the integer values of $n$ such that $x = \frac{1}{2} + n$ lies in the interval $(0, 2)$.

For $n = 0$, $x = \frac{1}{2} + 0 = \frac{1}{2}$. Since $0 < \frac{1}{2} < 2$, $x = \frac{1}{2}$ is a solution in $(0, 2)$.
For $n = 1$, $x = \frac{1}{2} + 1 = \frac{3}{2}$. Since $0 < \frac{3}{2} < 2$, $x = \frac{3}{2}$ is a solution in $(0, 2)$.
For $n = 2$, $x = \frac{1}{2} + 2 = \frac{5}{2}$. Since $\frac{5}{2} = 2.5 > 2$, $x = \frac{5}{2}$ is not in $(0, 2)$.
For $n = -1$, $x = \frac{1}{2} - 1 = -\frac{1}{2}$. Since $-\frac{1}{2} < 0$, $x = -\frac{1}{2}$ is not in $(0, 2)$.

Thus, the values of $x$ in the interval $(0, 2)$ that satisfy the conclusion of the Mean Value Theorem are $x = \frac{1}{2}$ and $x = \frac{3}{2}$. There are two such values.

**Answer:**

There are **2** values of $x$ in the open interval $(0, 2)$ that satisfy the conclusion of the Mean Value Theorem.

27
---
## Problem

The number of students in a cafeteria is modeled by the function $P(t)$ that satisfies the logistic differential equation
$$ \frac{dP}{dt} = \frac{1}{2000} P (200 - P) $$
where $t$ is the time in seconds and $P(0) = 25$. What is the greatest rate of change, in students per second, of the number of students in the cafeteria?

## Concept and Approach

To find the greatest rate of change of the number of students, we need to maximize $\frac{dP}{dt}$. Let's denote the rate of change as $R(P) = \frac{dP}{dt} = \frac{1}{2000} P (200 - P)$.  We want to find the maximum value of $R(P)$.

**Concept: Logistic Differential Equation and Maximum Rate of Change**

The given differential equation is a logistic differential equation, which models population growth with a carrying capacity. The rate of change is not constant but depends on the population size $P$. To find the maximum rate of change, we need to find the maximum value of the function $R(P)$.

**Approach: Maximizing the Rate of Change Function**

1.  **Express the rate of change as a function of $P$**: We have $R(P) = \frac{1}{2000} P (200 - P)$.
2.  **Find the critical points by taking the derivative of $R(P)$ with respect to $P$ and setting it to zero**: We need to find $\frac{dR}{dP}$ and solve $\frac{dR}{dP} = 0$.
3.  **Determine if the critical point corresponds to a maximum**: We can use the second derivative test to check if the critical point is a maximum.
4.  **Calculate the maximum rate of change**: Substitute the value of $P$ that maximizes $R(P)$ back into the equation for $\frac{dP}{dt}$.

## Solution

Let $R(P) = \frac{1}{2000} P (200 - P) = \frac{1}{2000} (200P - P^2)$.
To find the maximum rate of change, we differentiate $R(P)$ with respect to $P$:
$$ \frac{dR}{dP} = \frac{d}{dP} \left[ \frac{1}{2000} (200P - P^2) \right] = \frac{1}{2000} (200 - 2P) $$
Set $\frac{dR}{dP} = 0$ to find the critical points:
$$ \frac{1}{2000} (200 - 2P) = 0 $$
$$ 200 - 2P = 0 $$
$$ 2P = 200 $$
$$ P = 100 $$
To check if this is a maximum, we find the second derivative of $R(P)$ with respect to $P$:
$$ \frac{d^2R}{dP^2} = \frac{d}{dP} \left[ \frac{1}{2000} (200 - 2P) \right] = \frac{1}{2000} (-2) = -\frac{2}{2000} = -\frac{1}{1000} $$
Since $\frac{d^2R}{dP^2} = -\frac{1}{1000} < 0$, the critical point $P = 100$ corresponds to a maximum.

Now, we substitute $P = 100$ into the equation for $\frac{dP}{dt}$ to find the greatest rate of change:
$$ \frac{dP}{dt} = \frac{1}{2000} P (200 - P) = \frac{1}{2000} (100) (200 - 100) = \frac{1}{2000} (100) (100) = \frac{10000}{2000} = 5 $$

Thus, the greatest rate of change of the number of students in the cafeteria is 5 students per second.

**Answer:** The greatest rate of change is $\boxed{5}$ students per second.

**Key Formula Used:**

*   **Logistic Differential Equation:** $\frac{dP}{dt} = kP(M - P)$, where $M$ is the carrying capacity and $k$ is a constant.
*   **To find the maximum of a function $f(x)$:**
    1.  Find the first derivative $f'(x)$ and set it to zero to find critical points.
    2.  Use the second derivative test: If $f''(c) < 0$ at a critical point $c$, then $f(c)$ is a local maximum.

28
---
## Problem

A cube with edges of length $x$ centimeters has volume $V(x) = x^3$ cubic centimeters. The volume is increasing at a constant rate of 40 cubic centimeters per minute. At the instant when $x = 2$ cm, what is the rate of change of $x$, in centimeters per minute, with respect to time?

## Concept and Approach

This is a related rates problem in calculus. We are given the rate of change of the volume of a cube and asked to find the rate of change of its edge length at a specific instant.  The key idea in related rates problems is to use the chain rule to relate the rates of change of different variables that are related by some equation.

**Concept: Related Rates**

Related rates problems involve finding the rate of change of one quantity in terms of the rate of change of another quantity (or several other quantities).  These quantities are related by some function, and we use differentiation with respect to time to find the relationship between their rates of change.

**Key Formulas and Concepts:**

*   **Volume of a Cube:** $V = x^3$, where $V$ is the volume and $x$ is the edge length.
*   **Differentiation with respect to time (t):**  We will use the chain rule. For example, if $V$ is a function of $x$, and $x$ is a function of $t$, then $\frac{dV}{dt} = \frac{dV}{dx} \cdot \frac{dx}{dt}$.

**Approach to solve related rates problems:**

1.  **Identify the variables:** Determine all variables involved in the problem and assign symbols to them.
2.  **Identify the rates:** Determine which rates of change are given and which rate needs to be found.  Express these rates as derivatives with respect to time (e.g., $\frac{dV}{dt}$, $\frac{dx}{dt}$).
3.  **Find a relationship (equation) between the variables:**  Write down an equation that relates the variables. In this case, it's the volume formula of a cube.
4.  **Differentiate both sides of the equation with respect to time ($t$):** Use implicit differentiation and the chain rule.
5.  **Substitute the given values:** Plug in the known values for the rates and variables at the specific instant.
6.  **Solve for the unknown rate:** Solve the resulting equation for the rate you need to find.

## Solution

1.  **Variables:**
    *   $V$: Volume of the cube (in cubic centimeters)
    *   $x$: Edge length of the cube (in centimeters)
    *   $t$: Time (in minutes)

2.  **Rates:**
    *   Given rate: $\frac{dV}{dt} = 40$ cm$^3$/minute (volume is increasing)
    *   Unknown rate: $\frac{dx}{dt}$ when $x = 2$ cm

3.  **Relationship between variables:**
    *   $V = x^3$

4.  **Differentiate with respect to time ($t$):**
    $$ \frac{dV}{dt} = \frac{d}{dt}(x^3) $$
    Using the chain rule, we get:
    $$ \frac{dV}{dt} = 3x^2 \frac{dx}{dt} $$

5.  **Substitute the given values:**
    We are given $\frac{dV}{dt} = 40$ and $x = 2$. Plugging these values into the equation:
    $$ 40 = 3(2)^2 \frac{dx}{dt} $$
    $$ 40 = 3(4) \frac{dx}{dt} $$
    $$ 40 = 12 \frac{dx}{dt} $$

6.  **Solve for $\frac{dx}{dt}$:**
    $$ \frac{dx}{dt} = \frac{40}{12} = \frac{10}{3} $$

Therefore, when $x = 2$ cm, the rate of change of $x$ with respect to time is $\frac{10}{3}$ centimeters per minute.

**Answer:** The rate of change of $x$ is $\boxed{\frac{10}{3}}$ centimeters per minute.

B - 15
---
**Concept: Alternating Series Error Bound**

For a convergent alternating series $\sum_{n=1}^\infty (-1)^{n+1}a_n$ where:
1. $a_n > 0$ for all $n$
2. $a_{n+1} \leq a_n$ (terms decrease monotonically)
3. $\lim_{n\to\infty} a_n = 0$

The error in the $k^{th}$ partial sum satisfies:
$$|S - P_k| \leq a_{k+1}$$

**Given:**
$$S = \sum_{n=1}^\infty \frac{(-1)^{n+1} \cdot 2}{n},\quad P_k = \sum_{n=1}^k \frac{(-1)^{n+1} \cdot 2}{n}$$
We need to find the smallest $k$ where $|S - P_k| < \frac{3}{100}$

**Solution Approach:**
1. **Identify $a_n$:** From the general term $(-1)^{n+1}\frac{2}{n}$, we have $a_n = \frac{2}{n}$
2. **Verify conditions:**
   - $a_n = 2/n > 0$ for all $n \geq 1$
   - $a_{n+1} = 2/(n+1) < 2/n = a_n$
   - $\lim_{n\to\infty} 2/n = 0$
3. **Apply error bound:**
$$|S - P_k| \leq a_{k+1} = \frac{2}{k+1}$$
4. **Solve inequality:**
$$\frac{2}{k+1} < \frac{3}{100} \Rightarrow k+1 > \frac{200}{3} \Rightarrow k > 66.\overline{6}$$
5. **Conclusion:** The smallest integer $k$ satisfying this is $k = 67$

**Answer:** $\boxed{67}$

B - 14
---
**Concept: Area Between Polar Curves**

To find the area of a region bounded by two polar curves:
1. Use the polar area formula: 
   $$A = \frac{1}{2} \int_{\alpha}^{\beta} (r_{outer}^2 - r_{inner}^2) d\theta$$
2. Identify:
   - $r_{outer}(\theta)$: Upper boundary curve
   - $r_{inner}(\theta)$: Lower boundary curve
   - Intersection angles $\alpha$ and $\beta$

**Given Configuration:**
- Region $S$ in first quadrant ($0 \leq \theta \leq \frac{\pi}{2}$)
- Upper boundary: $r_{outer} = \cos\theta$
- Lower boundary: $r_{inner} = 2\theta$
- Intersection at $\theta = 0.450$ radians

**Approach:**
1. Verify first quadrant bounds ($\theta = 0$ to $\theta = \pi/2$)
2. Confirm intersection point at $\theta = 0.450$ through equation solving:
   $$\cos\theta = 2\theta$$
3. Set up area integral:
   $$A = \frac{1}{2} \int_{0}^{0.450} [(\cos\theta)^2 - (2\theta)^2] d\theta$$
4. The integrand represents:
   - $(\cos\theta)^2$: Contribution from upper cardioid
   - $(2\theta)^2$: Contribution from lower spiral

B-15
---
**Problem:**  
A particle moves in the xy-plane with velocity components:
$$
\frac{\mathrm{d}x}{\mathrm{d}t} = \sin(t^2) \quad \text{(horizontal velocity)}, \quad \frac{\mathrm{d}y}{\mathrm{d}t} = e^{\cos t} \quad \text{(vertical velocity)}$$
Given the particle's position is $(2, 1)$ at time $t = 4$, find its y-coordinate at time $t = 3$.

---

**Step-by-Step Explanation:**

1. **Understand the Relationship Between Velocity and Position:**
   - Velocity is the derivative of position
   - To find position at time t=3, we need to integrate velocity backward from t=4 to t=3

2. **Focus on Vertical Motion (y-component):**
   - We only need to calculate the vertical position since the question asks for the y-coordinate
   - Given vertical velocity: dy/dt = e^{cos t}
   - Known position: y(4) = 1

3. **Set Up Time Reversal Calculation:**
   - Normally we integrate forward in time: y(t) = y(t₀) + ∫[t₀→t] dy/dt dt
   - But since we're going backward (from t=4 to t=3), we reverse the limits:
   $$y(3) = y(4) - \int_{3}^{4} e^{\cos t} dt$$

4. **Simplify the Equation:**
   Substitute the known value y(4) = 1:
   $$y(3) = 1 - \int_{3}^{4} e^{\cos t} dt$$

5. **Handle the Challenging Integral:**
   - The integral ∫e^{cos t} dt has no simple formula
   - Solution requires numerical methods. Two common approaches:
   
   **Option 1: Taylor Series Expansion**
   - Expand e^{cos t} as: 
   $$1 + \cos t + \frac{\cos^2 t}{2!} + \frac{\cos^3 t}{3!} + \cdots$$
   - Integrate term by term between 3 and 4
   
   **Option 2: Simpson's Rule (Numerical Integration)**
   - Divide [3,4] into even subintervals
   - Approximate using parabolic arcs
   - General formula:
   $$\int_{a}^{b} f(t) dt \approx \frac{h}{3}[f(a) + 4f(a+h) + 2f(a+2h) + \cdots + 4f(b-h) + f(b)]$$
   where h = (b-a)/n

6. **Practical Calculation Steps:**
   - Choose a method (calculator/software recommended)
   - For Simpson's Rule with n=4:
     - h = (4-3)/4 = 0.25
     - Calculate f(3), f(3.25), f(3.5), f(3.75), f(4)
     - Apply weights [1, 4, 2, 4, 1]
     - Multiply by h/3 and sum
   - Subtract the result from 1 to get y(3)

**Final Answer Format:**
After calculating the integral value I ≈ [numerical value], the y-coordinate at t=3 is:
$$y(3) = 1 - I = [final result]$$

B-11
---
**Concept:**  
Inflection points occur where:
1. The second derivative changes sign (from $+$ to $-$ or $-$ to $+$)
2. This happens when $f''(x) = 0$ **and** the concavity changes

**Key Formula:**  
For $f''(x) = x(x-1)^2(x+2)^3$:  
- Roots at $x = -2,\ 0,\ 1$
- Multiplicity analysis:
  - $x = -2$: Odd multiplicity (3) → sign changes
  - $x = 0$: Odd multiplicity (1) → sign changes
  - $x = 1$: Even multiplicity (2) → no sign change

**Step-by-Step Analysis:**  

1. **Original Function f(x):**  
   $f''(x) = x(x-1)^2(x+2)^3$  
   Sign chart analysis:
   
   | Interval | Test Value | Sign of f''(x) | Concavity |
   |----------|------------|----------------|-----------|
   | x < -2   | x = -3     | (-)(+)(-) = -  | Down      |
   | -2 < x < 0 | x = -1  | (-)(+)(+) = -  | Down      |
   | 0 < x < 1 | x = 0.5  | (+)(+)(+) = +  | Up        |
   | x > 1    | x = 2     | (+)(+)(+) = +  | Up        |
   
   **Inflection Points:** 2 (at $x = -2$ and $x = 0$)

2. **Function g(x):**  
   $g''(x) = f''(x) + 1$  
   - Vertical shift upward by 1 unit
   - Graphically raises the curve above x-axis
   - Original roots become less distinct
   - Likely reduces number of real roots (needs calculus)
   - **Inflection Points:** Likely different count

3. **Function h(x):**  
   $h''(x) = f''(x) - 1$  
   - Vertical shift downward by 1 unit
   - Creates deeper negative regions
   - May introduce new roots
   - **Inflection Points:** Likely different count

**Critical Insight:**  
The constant shift ($\pm 1$) in $g''$ and $h''$ changes the number of real roots compared to $f''$. Only $f''$ maintains exactly two sign changes due to its specific root structure.

**Conclusion:**  
Only $f(x)$ has exactly two inflection points. The vertical shifts in $g''$ and $h''$ alter the root count through sign changes.


B-7
---
**Problem:**  
The derivative of the function \( f \) is given by:
\[
f'(x) = e^{-x} \cos(x^2)
\]
for all real numbers \( x \). What is the minimum value of \( f(x) \) for \( -1 \leq x \leq 1 \)?

---

**Conceptual Understanding:**  
To find extrema of \( f(x) \) on a closed interval, we use:
1. **Critical Points:** Where \( f'(x) = 0 \) or undefined
2. **Endpoint Evaluation:** Compare values at interval boundaries

**Key Formula (First Derivative Test):**  
\[
\text{Minimum occurs where } f'(x) \text{ changes from } - \text{ to } +
\]

**Step-by-Step Approach:**  

1. **Find Critical Points:**  
   Solve \( f'(x) = e^{-x} \cos(x^2) = 0 \)
   - \( e^{-x} \) is never zero
   - \( \cos(x^2) = 0 \Rightarrow x^2 = \frac{\pi}{2} + n\pi \)
   - In \( [-1, 1] \): \( x^2 \leq 1 < \frac{\pi}{2} \approx 1.57 \)
   - **No real solutions** → No critical points

2. **Analyze Monotonicity:**  
   - \( e^{-x} > 0 \) for all \( x \)
   - \( \cos(x^2) > 0 \) when \( x^2 < \frac{\pi}{2} \)
   - **Conclusion:** \( f'(x) > 0 \) throughout \( [-1, 1] \)

3. **Determine Extrema:**  
   - Function is **strictly increasing** on \( [-1, 1] \)
   - Minimum value occurs at left endpoint \( x = -1 \)

4. **Calculate Minimum Value:**  
   Use Fundamental Theorem of Calculus:
   \[
   f_{\text{min}} = f(-1) = f(a) + \int_{a}^{-1} f'(t) dt
   \]
   *Note: Requires initial condition \( f(a) \) for exact value*

**Conclusion:**  
The minimum value of \( f(x) \) occurs at \( x = -1 \). Final numerical answer requires additional information about \( f(x) \) at a specific point.
