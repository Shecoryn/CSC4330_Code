$sv = 0;
sub staticVal {
  return $sv;
}
sub staticScoping {
  my $sv = 1;
  return staticVal();
}

print staticScoping();

$dv = 0;
sub dynamicVal {
  return $dv;
}
sub dynamicScoping {
  local $dv = 1;
  return dynamicVal();
}
print dynamicScoping();