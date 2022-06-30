class Integer

  def czynniki
    dzielniki = []
    i = 1
    j = 0
    while i <= self
      if self%i == 0
        dzielniki[j] = i
        j += 1
      end
      i += 1
    end
    dzielniki
  end

  def ack(y)
    if self == 0
      y + 1
    elsif y == 0
      (self-1).ack(1)
    else
      (self-1).ack((self.ack(y-1)))
    end
  end

  def doskonala
    i = 0
    sum = 0
    tab = self.czynniki
    while i < tab.length - 1
      sum += tab[i]
      i += 1
    end

    if sum == self
      true
    else
      false
    end
  end

  def slownie
    digits = %w[zero one two three four five six seven eight nine]
    number = self.to_s.reverse.to_i
    words = ""
    i = 0
    while number > 0
      words += digits[number%10] + " "
      i += 1
      number = number/10
    end
    words
  end

end

puts 6.czynniki

puts 2.ack(1)

puts 7.doskonala

puts 123.slownie