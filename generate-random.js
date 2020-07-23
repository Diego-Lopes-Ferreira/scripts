function generateId(type) {
  // Math.random() -> 0.9942320411921581
  // Math.random.toString(36) -> 0.zsiw1l5hed
  // Math.random.toString(36).slice(2, 6) -> zsiw
  if (type === 'cat') {
    let r = Math.random().toString(36).slice(2, 5);
    console.log("#1-" + r);
    return '#1-' + r
  } else if (type === 'task') {
    let r = Math.random().toString(36).slice(2, 5);
    console.log("#0-" + r);
    return '#0-' + r
  } else {
    let r = Math.random().toString(36).slice(2, 8);
    console.log(r);
    return r
  }
}
