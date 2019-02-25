qsort :: Ord a => [a] -> [a]
qsort [] = []
qsort (x:xs) = qsort small ++ [x] ++ qsort large
    where small = [a | a <- xs, a <= x]
          large = [b | b <- xs, b > x]