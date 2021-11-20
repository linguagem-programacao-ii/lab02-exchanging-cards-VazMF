def read_input(list):
    for i in input().split():
        list.append(i)


def remove_duplicate(deck):
    return set(deck)


def show_results(cards_list):
    for card in cards_list:
        print(card)


results = list()

while True:
    alice, betty = input().split()
    alice_cards = list()
    betty_cards = list()

    if alice == '0' and betty == '0':
        break

    read_input(alice_cards)
    read_input(betty_cards)

    alice = remove_duplicate(alice_cards)
    betty = remove_duplicate(betty_cards)

    cards = betty

    if len(alice) < len(betty):
        cards = alice
        alice = betty

    cards = [x for x in cards if x not in alice]
    results.append(len(cards))

show_results(results)