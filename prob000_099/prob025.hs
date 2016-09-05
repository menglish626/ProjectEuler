----Michael-Patrick English
----Date: 20160807
----Project Euler
----Problem 25:
--

fibs = 1 : 1 : zipWith (+) fibs (tail fibs)

find_digwidth :: Integer -> [Integer] -> Int
find_digwidth wid (x:xs) 
                      | ((quot x  (10^(wid-1))) > 0) = 1
                      | otherwise                 = 1 + (find_digwidth wid xs)
                     
                

main = 
       print (find_digwidth 1000 fibs)
    
    
    
--
