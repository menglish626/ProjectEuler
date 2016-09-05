----Michael-Patrick English
----Date: 20160807
----Project Euler
----Problem 16:
--

digsum :: Integer -> Integer 
digsum x
        | x < 10    = x 
        | otherwise = (mod x 10) + (digsum (quot x 10))

factorial n = product [1..n] 

main = print (digsum (factorial 100))
    
    
    
--
