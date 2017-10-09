t = gets.chomp.to_i
t.times.each do 
  y, x = gets.chomp.split.map(&:to_i)
  flag = true
  y.times.each do
    c = '.'
    c = '*' if flag 
    x.times.each do
      print c
      c = (c == '*' ? '.' : '*')
    end
    print "\n"
    flag = !flag
  end
  print "\n"
end
