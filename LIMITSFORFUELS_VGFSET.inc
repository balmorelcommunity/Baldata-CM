SET LIMITSFORFUELS_VGFSET(LIMITSFORFUELS_NUMCONMAX,CCCRRRAAA,FFF) 'Sets of which a combination of maxima are set'                                  
/                                                                                                                                                  
NUMCONMAX1                                                                                                           .    DENMARK  .    THERMGAS   
NUMCONMAX1                                                                                                           .    DENMARK  .    STRAW      
NUMCONMAX2                                                                                                           .    DENMARK  .    BIOGAS     
NUMCONMAX3                                                                                                           .    DENMARK  .    THERMGAS   
*Woodpellets and thermgas                                                                                                                          
NUMCONMAX4                                                                                                           .    DENMARK  .    WOODPELLETS
NUMCONMAX4                                                                                                           .    DENMARK  .    THERMGAS   
*Woodpellets, straw and thermgas                                                                                                                   
NUMCONMAX5                                                                                                           .    DENMARK  .    THERMGAS   
NUMCONMAX5                                                                                                           .    DENMARK  .    WOODPELLETS
NUMCONMAX5                                                                                                           .    DENMARK  .    STRAW      
$ifi not %combtech%==yes $goto nocombtech                                                                                                          
NUMCONMAX1                                                                                                           .    DENMARK  .    THERMGAS_UP
NUMCONMAX2                                                                                                           .    DENMARK  .    BIOGAS_UP  
NUMCONMAX3                                                                                                           .    DENMARK  .    THERMGAS_UP
NUMCONMAX4                                                                                                           .    DENMARK  .    THERMGAS_UP
NUMCONMAX5                                                                                                           .    DENMARK  .    THERMGAS_UP
$label nocombtech                                                                                                                                  
$ifi not %hydrogen%==yes $goto nohydrogen                                                                                                          
NUMCONMAX1                                                                                                           .    DENMARK  .    THERMGAS_H2
NUMCONMAX2                                                                                                           .    DENMARK  .    BIOGAS_H2  
NUMCONMAX3                                                                                                           .    DENMARK  .    THERMGAS_H2
NUMCONMAX4                                                                                                           .    DENMARK  .    THERMGAS_H2
NUMCONMAX5                                                                                                           .    DENMARK  .    THERMGAS_H2
$label nohydrogen                                                                                                                                  
/                                                                                                                                                  
;                                                                                                                                                  
LIMITSFORFUELS_VGFSET(LIMITSFORFUELS_NUMCONMAX,C,FFF)=LIMITSFORFUELS_VGFSET(LIMITSFORFUELS_NUMCONMAX,'DENMARK',FFF);                               
