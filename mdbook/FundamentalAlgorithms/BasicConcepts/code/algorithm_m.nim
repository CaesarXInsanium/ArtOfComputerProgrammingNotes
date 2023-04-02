import random
randomize()

proc m(X : seq[int]): int = 
  var j,k,m,n: int
  n = X.len - 1
  j = n
  k = n
  m = X[n]

  while k != 0:
    if X[k] <= m:
      k -= 1
      continue
    j = k
    m = X[k]
    k -= 1;
  result = j
  return result


when isMainModule:
  var array: seq[int]
  let size = 10
  for i in 0..size:
    array.add(rand(0..size))

  echo array
  echo ("Result: " ,m(array))

  let test = @[1,2,3,2,1]
  echo test
  echo m(test)
