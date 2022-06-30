key = {
  'a' => 'b',
  'b' => 'c',
  'c' => 'd',
  'd' => 'e',
  'e' => 'f',
  'f' => 'g',
  'g' => 'h',
  'h' => 'i',
  'i' => 'j',
  'j' => 'k',
  'k' => 'l',
  'l' => 'm',
  'm' => 'n',
  'n' => 'o',
  'o' => 'p',
  'p' => 'r',
  'r' => 's',
  's' => 't',
  't' => 'u',
  'u' => 'w',
  'w' => 'z',
  'z' => 'a'
}

class Jawna
  attr_accessor :slowo

  def initialize(slowo)
    @slowo = slowo.to_s
  end

  def to_s
    @slowo
  end

  def zaszyfruj(key)
    i = 0
    while i < @slowo.length
      @slowo[i] = key[@slowo[i]]
      i += 1
    end
    Zaszyfrowana.new(slowo)
  end
end

class Zaszyfrowana
  attr_accessor :slowo

  def initialize(slowo)
    @slowo = slowo.to_s
  end

  def to_s
    @slowo
  end

  def odszyfruj(key)
    i = 0
    while i < @slowo.length
      @slowo[i] = key.invert[@slowo[i]]
      i += 1
    end
    Jawna.new(slowo)
  end
end


slowo = Jawna.new("lista")
puts slowo.zaszyfruj(key)
#puts slowo.to_s

slowo2 = Zaszyfrowana.new(slowo)
puts slowo2.odszyfruj(key)
#puts slowo2.to_s

slowo3 = Jawna.new(slowo2)
puts slowo3.zaszyfruj(key)