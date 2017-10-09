t = gets.chomp.to_i
t.times.each do
  y, x = gets.chomp.split.map(&:to_i)
  y.times.each do |i|
    x.times.each do |j|
      if i == 0 || i == y - 1 || j == 0 || j == x - 1
        print '*'
      else
        print '.'
      end
    end
    print "\n"
  end
  print "\n"
end
