---
title: 0-1 Knapsack Dynamic Programming
author: Vishal Ambavade (@VishalAmbavade)
date: 2021-10-13
---

![Knapsack Visual Representation](./Knapsack/knapsack_1.jpg, "Knapsack Visual Representation")

<p> Accoridng to Wikipedia, </p>
> Given a set of items, each with a weight and a   value, determine the number of each item to include in a collection so that the total weight is less than or equal to a given limit and the total value is as large as possible.

<br><br>
<p> There are a few variations of Knapsack problem:
- 0-1 Knapsack
- Bounded knapsack
- Unbounded Knapsack

Here, we'll see the algorithm of 0-1 Knapsack problem.

## Problem Details

<p> Suppose we have a knapsack which can hold int w = 10 weight units. We have a total of int n = 4 items to choose from, whose values are represented by an array int[] val = {10, 40, 30, 50} and weights represented by an array int[] wt = {5, 4, 6, 3}.
Since this is the 0–1 knapsack problem, we can either include an item in our knapsack or exclude it, but not include a fraction of it, or include it multiple times.

## Algorithm

```Dynamic-0-1-knapsack (v, w, n, W) 
for w = 0 to W do 
   c[0, w] = 0 
for i = 1 to n do 
   c[i, 0] = 0 
   for w = 1 to W do 
      if wi ≤ w then 
         if vi + c[i-1, w-wi] then 
            c[i, w] = vi + c[i-1, w-wi] 
         else c[i, w] = c[i-1, w] 
      else 
         c[i, w] = c[i-1, w] 
```

![Knapsack solution](knapsack_2.png, "Knapsack Solution")   
