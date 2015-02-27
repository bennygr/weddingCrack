# weddingCrack
A simple, not efficient, prototype of a cracking tool for breaking a [simple substitution cipher](http://practicalcryptography.com/ciphers/classical-era/simple-substitution/).

## What is wedding Crack?
weddingCrack is a simple, not efficient, prototype of a cracking tool for breaking a [simple substitution cipher](http://practicalcryptography.com/ciphers/classical-era/simple-substitution/). It uses a climbing hill algorithm starting with a random key and get the deciphered text fitter and fitter.


##Features / Limitations

  - This program is just a simple example implementation and neither optimized for speed nor for extendability
  - Place your key guesses into the file guesses.txt
  - German dictionary of [quadgrams](http://practicalcryptography.com/cryptanalysis/text-characterisation/quadgrams/)
    more can be found [here](http://practicalcryptography.com/cryptanalysis/text-characterisation/quadgrams/)

##Build

    cd src
    ./build.sh
  
##Usage
- Place the cypher text into the file input.txt
- Make sure you've copied your quadram list of the target language to ngrams.txt.
- Run the program: ./wdc
- Place your guesses into the file guesses.txt
- Run the program..
- continue until you have the cleartext
