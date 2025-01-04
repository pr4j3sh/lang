import java.util.LinkedList;
import java.util.Queue;

class Node {
  int val;
  Node left;
  Node right;

  Node(int val) {
    this.val = val;
    this.left = null;
    this.right = null;
  }
}

class BinarySearchTree {
  Node root;

  BinarySearchTree() {
    this.root = null;
  }

  Node insert(Node node, int value) {
    if (node == null) {
      return new Node(value);
    }

    if (value < node.val) {
      node.left = insert(node.left, value);
    } else {
      node.right = insert(node.right, value);
    }
    return node;
  }

  void inorderTraversal(Node node) {
    if (node == null) {
      return;
    }
    inorderTraversal(node.left);
    System.out.print(node.val + " ");
    inorderTraversal(node.right);
  }

  void levelorderTraversal(Node node) {
    if (node == null) {
      return;
    }
    Queue<Node> q = new LinkedList<>();
    q.add(node);

    while (!q.isEmpty()) {
      Node temp = q.poll();
      System.out.print(temp.val + " ");

      if (temp.left != null)
        q.add(temp.left);
      if (temp.right != null)
        q.add(temp.right);

    }
    System.out.println("\n");
  }

}

public class Main {
  public static void main(String[] args) {
    BinarySearchTree tree = new BinarySearchTree();

    tree.root = tree.insert(tree.root, 50);
    tree.insert(tree.root, 30);
    tree.insert(tree.root, 70);
    tree.insert(tree.root, 20);
    tree.insert(tree.root, 40);
    tree.insert(tree.root, 60);
    tree.insert(tree.root, 80);

    tree.inorderTraversal(tree.root);
    System.out.println("\n");
    tree.levelorderTraversal(tree.root);
  }
}
