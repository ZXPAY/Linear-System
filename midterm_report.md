# 線性系統期中報告
### 本次作業、實驗為計算Jordan Form，並討論其特性

#### Example matrix A below
``` latex
$$
A=\left [\matrix{
0.3&1&0&0&0\\
0&0.3&1&0&0\\
0&0&0.3&0&0\\
0&0&0&0.3&1\\
0&0&0&0&0.3
}\right ]
$$
```
#### To find eigenvalue, it satisfied $A\vec{K} = \lambda\vec{K}$

$$(A-\lambda I)\vec{K} = \{\vec{0}\}$$

$$det(A-\lambda I) = 0$$

$$
det(A-\lambda I) = 
\left |
\left [
\matrix{
    0.3-\lambda&1&&0&0&0\\
    0&0.3-\lambda&&1&0&0\\
    0&0&&0.3-\lambda&0&0\\
    0&0&&0&0.3-\lambda&1\\
    0&0&&0&0&0.3-\lambda
    }
\right ]
\right |
= 0
$$

#### Reduce dimension, and we can get the equation below

$$-(10\times\lambda-3)^5 = 0\\
\therefore\lambda = \left\{0.3,\ 0.3,\ 0.3,\ 0.3,\ 0.3\right\}
$$

#### Sovle the eigenvector

$$
(A-\lambda I)\vec{K} = \{\vec{0}\}
$$

#### Let $\lambda$ be 0.3

$$
(A-\lambda I)\vec{K}= 
\left [
\matrix{
    0&1&0&0&0\\
    0&0&1&0&0\\
    0&0&0&0&0\\
    0&0&0&0&1\\
    0&0&0&0&0\\
    }
\right ]
    \left \{
    \matrix{a\\b\\c\\d\\e}
    \right \} = \{\vec{0}\}
    \\ 
    \\ 
    \therefore\ we\ can\ get\ \ b=0,\ c=0,\ e=0\\
    span\left\{
    \left\{
    \matrix{1\\0\\0\\0\\0}
    \right\}
    、
    \left\{
    \matrix{0\\0\\0\\1\\0}
    \right\}
    \right\}
$$

#### To get more eigenvectors, we need to generalized eigenvectors (GEV)

$$
(A-\lambda I)^2\vec{K} = 
\left [
\matrix{
    0&0&1&0&0\\
    0&0&0&0&0\\
    0&0&0&0&0\\
    0&0&0&0&0\\
    0&0&0&0&0\\
    }
\right ]
    \left \{
    \matrix{a\\b\\c\\d\\e}
    \right \} = \{\vec{0}\}
    \\ 
    \\ 
    \therefore\ we\ can\ get\ \ a=0\\
    span\left\{
    \left\{
    \matrix{0\\1\\0\\0\\0}
    \right\}
    、
    \left\{
    \matrix{0\\0\\1\\0\\0}
    \right\}
    、
    \left\{
    \matrix{0\\0\\0\\0\\1}
    \right\}
    \right\}
$$

#### Now, we have five eigenvectors to construct matrix $M$
$$
M = 
\left[
\matrix{
    1&0&0&0&0\\
    0&1&0&0&0\\
    0&0&1&0&0\\
    0&0&0&1&0\\
    0&0&0&0&1\\
}
\right]
= I,\ where\ I\ is\ idendity\ matrix
\\
\therefore\ Jodan\ matrix\ J = M^{-1}AM = A
$$
