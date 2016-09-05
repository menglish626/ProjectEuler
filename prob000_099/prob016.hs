----Michael-Patrick English
----Date: 20160807
----Project Euler
----Problem 16:
--

digsum :: Integer -> Integer 
digsum x
        | x < 10    = x 
        | otherwise = (mod x 10) + (digsum (quot x 10))


main = print (digsum (2^1000))
    
    
    
--
