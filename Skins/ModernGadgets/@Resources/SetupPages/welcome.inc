[TitleString]
Meter=String
MeterStyle=StyleString
FontSize=23
FontColor=#fontColorAccent#
StringAlign=Center
X=#bgCenterX#
Y=#contentMargin#
Text="Modern Gadgets"

[SubtitleString]
Meter=String
MeterStyle=StyleString
FontSize=10
FontColor=#fontColorDim#
StringAlign=Center
X=r
Y=R
Text="The ultimate desktop gadgets replacement suite"

[IntroParagraphString]
Meter=String
MeterStyle=StyleString | StyleStringParagraph
Text="Modern Gadgets is a new set of system monitoring gadgets created by iamanai. They are the gadgets you know and love, but with a modernized twist and several new features not present in the originals. This skin suite is also the first to implement a new system for handling user settings, which we will go over later.#CRLF##CRLF#We will now go through a brief tutorial on how to use and configure ModernGadgets. If you wish to skip this, click 'Skip Tutorial'. Otherwise, click 'next' to continue."

[NextButton]
Meter=String
MeterStyle=StyleString | StyleStringButton
StringAlign=Right
X=#contentMarginRightX#
Y=(#bgHeight# - 40)
Text="Next"
LeftMouseUpAction=[!WriteKeyValue Variables page "tutorial1"][!Refresh]

[SkipTutorialButton]
Meter=String
MeterStyle=StyleString | StyleStringButton
Y=r
Text="Skip Tutorial"
LeftMouseUpAction=[!WriteKeyValue Variables page "skinSelect"][!Refresh]