from colorama import Fore, init, Style

init()

print(
        Fore.RED
        + """
  _____      _               _                                                    _     __   ___
 |  __ \    | |             | |                                                  | |   /_ | / _ \ 
 | |__) |__ | | _____ _ __  | |_ ___  _   _ _ __ _ __   __ _ _ __ ___   ___ _ __ | |_   | || | | |
 |  ___/ _ \| |/ / _ \ '__| | __/ _ \| | | | '__| '_ \ / _` | '_ ` _ \ / _ \ '_ \| __|  | || | | |
 | |  | (_) |   <  __/ |    | || (_) | |_| | |  | | | | (_| | | | | | |  __/ | | | |_   | || |_| |
 |_|   \___/|_|\_\___|_|     \__\___/ \__,_|_|  |_| |_|\__,_|_| |_| |_|\___|_| |_|\__|  |_(_)___/ 
                                                                                                  
                                                                                                  """ + "NOTE: This program is configured for a 6 players table")

hand_number = 0

print(Style.RESET_ALL)


while(True):

    #Pre-flop
    pic_to_num = [-1, -1, "2", "3", "4", "5", "6", "7", "8", "9", "10", "J", "Q", "K", "A"]

    START = pic_to_num.index(input("Please enter you lowest card: "))
    END = pic_to_num.index(input("Now enter your highest card: "))

    diff = 14 - END

    if diff != 0:
        
        possible_high_card = diff * 4

