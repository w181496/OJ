t = gets.chomp.to_i
t.times do
  n = gets
  ans = 0
  n.each_char do |i|
    ans += i.to_i
  end
  p ans
end

