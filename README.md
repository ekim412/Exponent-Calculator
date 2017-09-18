# Exponent-Calculator
## Guide ##
User will be asked to enter base and exponent value. We assume base is a positive float and exponent is an integer.

Exponent is calculated using a recursive function in O(log n) and the result will be displayed.

The recursive function is done so that for a<sup>n</sup>
* if n is even, recursive function will go down to a<sup>n/2</sup> * a<sup>n/2</sup>
* if n is odd, recursive function will go down to a * a<sup>n/2</sup> * a<sup>n/2</sup>
