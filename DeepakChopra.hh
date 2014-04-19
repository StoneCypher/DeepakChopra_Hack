<?hh

  srand();

  $texts = Vector {
    Vector {"Experiential truth ", "The physical world ", "Non-judgment ", "Quantum physics "},
    Vector {"nurtures ", "projects onto ", "imparts reality to ", "constructs with "},
    Vector {"abundance of ", "the barrier of ", "self-righteous ", "potential "},
    Vector {"marvel.", "choices.", "creativity.", "actions."}
  };

  echo implode(" ", $texts->map( $uarray ==> $uarray[rand(0, count($uarray)-1)] ) );
