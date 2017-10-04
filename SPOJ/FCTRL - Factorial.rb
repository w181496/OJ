t = gets.chomp.to_i
t.times do
  n = gets.chomp.to_i
  tmp = 5
  ans = 0
  while n >= tmp
    ans += n / tmp
    tmp *= 5
  end
  p ans
end

