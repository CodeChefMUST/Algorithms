## Binary Search
#### 1. In Binary Serach a sorted array by repeatedly dividing the search interval in half.
#### 2. We compare the given element with the middle element.
#### 3. If it matches with the middle element, we return the mid index value.
#### 4. Else If it is greater than the mid element, then it can only lie in the right half subarray after the mid element. So we recur for the right half.
#### 5. Else (the element to be searched is smaller) recur for the left half of the subarray.
![This is an image](https://res.cloudinary.com/practicaldev/image/fetch/s--Uj818KRw--/c_imagga_scale,f_auto,fl_progressive,h_420,q_auto,w_1000/https://dev-to-uploads.s3.amazonaws.com/i/5hsod7t93v85b23rk671.png)
