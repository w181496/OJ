t = gets.chomp.to_i
t.times do
  n, m = gets.chomp.split.map(&:to_i)
  p (n.to_s.reverse.to_i + m.to_s.reverse.to_i).to_s.reverse.to_i
end

