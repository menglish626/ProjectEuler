----Michael-Patrick English
----Date: 26 November 2015 
----Project Euler
----Problem 13:
--
----Work out the first ten digits of the sum of the following one-hundred 50-digit numbers.
main = do xs <- fmap (map read . lines) (readFile "prob013.num")
          print . take 10 . show . sum $ xs
--
