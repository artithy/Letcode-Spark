function ListNode(val, next = null) {
    this.val = val;
    this.next = next;
}

function mergeTwoLists(list1, list2) {
    let dummy = new ListNode(0);
    let current = dummy;

    while (list1 && list2) {
        if (list1.val < list2.val) {
            current.next = list1;
            list1 = list1.next;
        } else {
            current.next = list2;
            list2 = list2.next;
        }
        current = current.next;
    }

    current.next = list1 || list2;

    return dummy.next;
}

function arrayToList(arr) {
    let head = new ListNode(0);
    let current = head;
    for (let val of arr) {
        current.next = new ListNode(val);
        current = current.next;
    }
    return head.next;
}

function printList(node) {
    let result = [];
    while (node) {
        result.push(node.val);
        node = node.next;
    }
    console.log(result);
}

let list1 = [1, 2, 4];
let list2 = [1, 3, 4];

let list1Node = arrayToList(list1);
let list2Node = arrayToList(list2);

let mergedList = mergeTwoLists(list1Node, list2Node);
printList(mergedList);
