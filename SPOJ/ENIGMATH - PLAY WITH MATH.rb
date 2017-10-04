t = gets.to_i
t.times do
  a, b = gets.chomp.split.map(&:to_i)
  g = a.gcd(b) 
  puts "#{b / g} #{a / g}"
end
